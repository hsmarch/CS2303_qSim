//
// Created by Harrison March on 2/14/2018.
//

#ifndef QSIM_HSMARCH_EVENT_H
#define QSIM_HSMARCH_EVENT_H


class Event {
public:
    double timestamp;
    double length;
    Event *next;
    void print();
};


#endif //QSIM_HSMARCH_EVENT_H
