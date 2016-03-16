#include "BoostLogger.h"
#include <../Toolkits/boost_1_56_0/boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/sinks/text_file_backend.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>
#include <boost/log/sources/global_logger_storage.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>


namespace logging = boost::log;
namespace attrs = boost::log::attributes;
namespace src = boost::log::sources;
namespace sinks = boost::log::sinks;
namespace expr = boost::log::expressions;
namespace keywords = boost::log::keywords;


using namespace Mcf;

BOOST_LOG_INLINE_GLOBAL_LOGGER_DEFAULT(Boost_Logger,src::severity_logger_mt<LogLevels>)

BOOST_LOG_ATTRIBUTE_KEYWORD(severity, "Severity", LogLevels)

struct severity_tag;

//------------------------------------------------------------------------------------------------------
logging::formatting_ostream& operator<< (
        logging::formatting_ostream& strm,
        logging::to_log_manip<LogLevels, severity_tag > const& manip)
{
    static const int NUM_SEVERITY_LEVELS = 6;
    static const char* severity_level_str[] =
    {
        "TRC",
        "DBG",
        "INF",
        "WRN",
        "ERR",
        "FTL"
    };

    LogLevels lvl = manip.get();
    const char* str = severity_level_str[lvl];
    if (lvl < NUM_SEVERITY_LEVELS && lvl >= 0)
        strm << str;
    else
        strm << static_cast< int >(lvl);
    return strm;
}

//------------------------------------------------------------------------------------------------------
BoostLogger::BoostLogger()
{
}

//------------------------------------------------------------------------------------------------------
MCF_BOOL BoostLogger::Initialize(const MCF_STRING &folder, const MCF_STRING & prefix)
{
    logging::register_simple_formatter_factory<LogLevels, char>("Severity");

    MCF_STRING fileName = folder + _L("\\") + prefix + _L("%Y%m%d_%H%M%S_%5N.log");
    MCF_STRING archiveFolder = folder + _L("\\Archive");
    typedef sinks::synchronous_sink<sinks::text_file_backend> file_sink;
    boost::shared_ptr<file_sink> sink(new file_sink(
        // file name pattern
        keywords::file_name = fileName.c_str(),
        // rotation size, in characters
        keywords::rotation_size = 5 * 1024 * 1024,
        // make each log record flushed to the file
        keywords::auto_flush = true
        ));

    // Set up where the rotated files will be stored
    sink->locked_backend()->set_file_collector(sinks::file::make_collector(
        // where to store rotated files
        keywords::target = archiveFolder.c_str(),
        // oldest log files will be removed if the total size reaches 100 MiB...
        keywords::max_size = 100 * 1024 * 1024,
        // ...or the free space in the target directory comes down to 50 MiB
        keywords::min_free_space = 50 * 1024 * 1024
        ));

    // Upon restart, scan the target directory for files matching the file_name pattern
    sink->locked_backend()->scan_for_files();

    // Set log record format.
    sink->set_formatter(
        expr::stream
                << std::setw(7) << std::setfill('0') << expr::attr<unsigned int>("LineID")
                << ": [" << expr::attr<attrs::current_thread_id::value_type>("ThreadID")
                << "][" << expr::format_date_time<boost::posix_time::ptime>("TimeStamp", "%Y-%m-%d %H:%M:%S.%f")
                << "] <" << expr::attr<LogLevels, severity_tag>("Severity") << "> "
                << expr::smessage
        );

    // Add it to the core
    logging::core::get()->add_sink(sink);

    // Add some attributes
    logging::add_common_attributes();

    return MCF_TRUE;
}

//------------------------------------------------------------------------------------------------------
void BoostLogger::Log(LogLevels level, const std::string &message)
{
    BOOST_LOG_SEV(Boost_Logger::get(), level) << message;
}

//------------------------------------------------------------------------------------------------------
void BoostLogger::SetLevel(LogLevels level)
{
    logging::core::get()->set_filter
        (
            severity >= level
        );
}
