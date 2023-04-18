#ifndef GUARD_MYSTERY_EVENT_SCRIPT_H
#define GUARD_MYSTERY_EVENT_SCRIPT_H

#include "global.h"

enum {
    MEVENT_STATUS_LOAD_OK,
    MEVENT_STATUS_LOAD_ERROR,
    MEVENT_STATUS_SUCCESS,
    MEVENT_STATUS_FAILURE,
    MEVENT_STATUS_FF = 0xFF
};

u32 RunMysteryEventScript(u8 *);
void SetMysteryEventScriptStatus(u32 val);

void MEventScript_InitContext(u8 *);
bool32 MEventScript_Run(u32 *);

#endif // GUARD_MYSTERY_EVENT_SCRIPT_H
