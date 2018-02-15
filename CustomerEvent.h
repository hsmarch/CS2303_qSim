//
// Created by Harrison March on 2/14/2018.
//

#ifndef QSIM_HSMARCH_CUSTOMEREVENT_H
#define QSIM_HSMARCH_CUSTOMEREVENT_H


#include "Event.h"

class CustomerEvent : public Event {
public:
    CustomerEvent(double _timestamp, double duration);
};


#endif //QSIM_HSMARCH_CUSTOMEREVENT_H
