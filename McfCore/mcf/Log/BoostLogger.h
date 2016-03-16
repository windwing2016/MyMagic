#ifndef BOOSTLOGGER_H
#define BOOSTLOGGER_H

#include "ILogger.h"

NS_MCFC_BEGIN

class MCFC_API BoostLogger: public ILogger
{
public:
    BoostLogger();
    MCF_BOOL Initialize(const MCF_STRING &folder,const MCF_STRING &prefix);
    virtual void Log(LogLevels level, const std::string &message);
    virtual void SetLevel(LogLevels level);


};

NS_MCFC_END














#endif // BOOSTLOGGER_H
