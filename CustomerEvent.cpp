//
// Created by Harrison March on 2/13/2018.
//

#include <cstdio>
#include "Event.h"
#include "CustomerEvent.h"


CustomerEvent::CustomerEvent() {
}

void CustomerEvent::action() {
    printf("Customer Event performed action at timestamp %i\n", delay);
}

CustomerEvent::CustomerEvent(double timestamp, double servicetime) {
    setTimeStamp(timestamp);
    setEventDelay(servicetime);
}
