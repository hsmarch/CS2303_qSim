//
// Created by Harrison March on 2/13/2018.
//

#ifndef QSIM_HSMARCH_QUEUE_H
#define QSIM_HSMARCH_QUEUE_H


#include "Event.h"

class Queue {
private:
    Event *next;
    Event *head;
    Event *tail;
public:
    Event *getHead();

    Event *getNext();

    Event *getTail();

    void setHead(Event *h);

    void setNext(Event *n);

    void setTail(Event *t);

    Queue();
};


#endif //QSIM_HSMARCH_QUEUE_H
