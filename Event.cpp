//
// Created by Harrison March on 2/13/2018.
//

#include <iostream>
#include "Event.h"

int Event::getTimeStamp() {
    return timeStamp;
}

void Event::action() {

}

Event *Event::getNextEvent() {
    return next;
}

void Event::setEventDelay(int d) {
    delay = d;
}

void Event::setNextEvent(Event *e) {
    next = e;

}

void Event::print() {
    std::cout << "Event: TS" << timeStamp << ", RD" << delay << std::endl;
}

void Event::setTimeStamp(int ts) {
    timeStamp = ts;
}
