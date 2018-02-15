//
// Created by Harrison March on 2/14/2018.
//

#ifndef QSIM_HSMARCH_EVENTQUEUE_H
#define QSIM_HSMARCH_EVENTQUEUE_H


#include "Event.h"

class EventQueue {
public:
    Event *head;
    Event *tail;

    Event *removeHead();

    int length = 0;

    void add(Event *e);
    void printQueue();

    void sortQueue();

    EventQueue();
};


#endif //QSIM_HSMARCH_EVENTQUEUE_H
