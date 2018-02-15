//
// Created by Harrison March on 2/14/2018.
//

#ifndef QSIM_HSMARCH_EVENTQUEUE_H
#define QSIM_HSMARCH_EVENTQUEUE_H


#include "Queue.h"

class EventQueue : public Queue {
public:
    EventQueue();

    void addToQueue(Event *e);

    void printQueue();
};


#endif //QSIM_HSMARCH_EVENTQUEUE_H
