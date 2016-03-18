#ifndef MAGICCOMMON_GLOBAL_H
#define MAGICCOMMON_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef MAGICCOMMON_DLL
#define MAGIC_API __declspec(dllexport)
#define MAGIC_TEMPLATE
#else
#define MAGIC_API __declspec(dllimport)
#define MAGIC_TEMPLATE extern
#endif

#define NS_MAGIC_BEGIN	namespace Magic {
#define NS_MAGIC_END		}

#include <../McfCore/mcf.h>
NS_MAGIC_BEGIN
enum MachineStatus
{
    MachineStatusUnknown    = -1,           // Unknown status.
    MachineStatusIdle       = 0,            // Idle.
    MachineStatusRunning    = 1,            // Running.
    MachineStatusPaused     = 2,            // Paused.
    MachineStatusError      = 3   ,          // Error.
    MachineStatusIdleWithInitWafer      = 4             // Idle with int wafer.
};

NS_MAGIC_END

#endif // MAGICCOMMON_GLOBAL_H
