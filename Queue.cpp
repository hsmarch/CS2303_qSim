//
// Created by Harrison March on 2/13/2018.
//

#include "Event.h"
#include "Queue.h"

Event *Queue::getHead() {
    return head;
}


Event *Queue::getNext() {
    return next;
}

Event *Queue::getTail() {
    return tail;
}

void Queue::setHead(Event *h) {
    head = h;
}

void Queue::setNext(Event *n) {
    next = n;
}

void Queue::setTail(Event *t) {
    tail = t;
}


Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}



