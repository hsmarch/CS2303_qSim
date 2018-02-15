//
// Created by Harrison March on 2/14/2018.
//

#include "CustomerEvent.h"

CustomerEvent::CustomerEvent(double _timestamp, double duration) : Event() {
    timestamp = _timestamp;
    length = duration;
}

