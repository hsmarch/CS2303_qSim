//
// Created by Harrison March on 2/13/2018.
//

#ifndef QSIM_HSMARCH_CUSTOMEREVENT_H
#define QSIM_HSMARCH_CUSTOMEREVENT_H


#include "Event.h"

class CustomerEvent : public Event {
public:
    CustomerEvent();

    CustomerEvent(double timestamp, double servicetime);

    void action() override;

private:
    int start;
    int serviceTime;
};


#endif //QSIM_HSMARCH_CUSTOMEREVENT_H
