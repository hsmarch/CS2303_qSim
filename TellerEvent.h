//
// Created by Harrison March on 2/14/2018.
//

#ifndef QSIM_HSMARCH_TELLEREVENT_H
#define QSIM_HSMARCH_TELLEREVENT_H


#include "Event.h"

class TellerEvent : public Event {

public:
    TellerEvent(double serviceTime);
};


#endif //QSIM_HSMARCH_TELLEREVENT_H
