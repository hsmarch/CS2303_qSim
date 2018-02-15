//
// Created by Harrison March on 2/14/2018.
//

#include <cstdio>
#include <iostream>
#include "EventQueue.h"

EventQueue::EventQueue() = default;

void EventQueue::addToQueue(Event *e) {
    std::cout << getHead()->getTimeStamp() << std::endl;
    Event *cursor = getHead();
    do {

    } while ((cursor = cursor->getNextEvent()) != nullptr);
}

void EventQueue::printQueue() {
    std::cout << getHead()->getTimeStamp() << std::endl;
    Event *cursor = getHead();
    do {
        cursor->print();
        cursor = cursor->getNextEvent();
    } while (cursor != nullptr);
    std::cout << "" << std::endl;

}


