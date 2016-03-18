#ifndef MAGICA_H
#define MAGICA_H

#ifdef MAGIC_EXE
#define MAGICA_API
#else
#if MAGICA_DLL
#define MAGICA_API __declspec(dllexport)
#else
#define MAGICA_API __declspec(dllimport)
#endif
#endif

#define NS_MAGICA_BEGIN	namespace MagicA {
#define NS_MAGICA_END		}

#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <../MagicCommon/Magic.h>
NS_MAGICA_BEGIN

// Specifies chuck positions.
enum ChuckPositions
{
    ChuckPosUnknown         = -1,
    ChuckPosBelowScan       = 0,
    ChuckPosScan            = 1,
    ChuckPosScanSeparate    = 2,
    ChuckPosSeparate        = 3,
    ChuckPosSeparateBase    = 4,
    ChuckPosBase            = 5,
    ChuckPosBaseContact     = 6,
    ChuckPosScanBase        = 7,
    ChuckPosSafeBase        = 8,
    ChuckPosBaseSeparate    = 9,
    ChuckPosSeparateContact = 10,
    ChuckPosContact         = 11,
    ChuckPosAboveContact    = 12
};

enum TesterStatus
{
    MagicOnly = 0,
    NA = 1,
    Online = 2,
    Offline = 3
};

NS_MAGICA_END

#endif // MAGICA_H
