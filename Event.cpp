//
// Created by Harrison March on 2/14/2018.
//

#include <iostream>
#include "Event.h"
void Event::print() {
    std::cout << "CE--TIME" << timestamp << "LEN" << length << std::endl;
}
