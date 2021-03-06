//
// Created by red031000 on 2020-05-17.
//

#ifndef POKEDIAMOND_OS_ALARM_H
#define POKEDIAMOND_OS_ALARM_H

#include "types.h"
#include "OS_thread.h"

typedef void (*OSAlarmHandler) (void *);

struct OSiAlarm
{
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};

#endif //POKEDIAMOND_OS_ALARM_H
