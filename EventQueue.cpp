//
// Created by Harrison March on 2/14/2018.
//

#include "EventQueue.h"

Event *EventQueue::removeHead() {
    Event *h = head;
    head = h->next;
    return h;
}

void EventQueue::add(Event *e) {
    if (head == nullptr) {
        head = e;
        tail = nullptr;
        head->next = tail;
    } else {
        e->next = head->next;
        head->next = e;
    }

}

EventQueue::EventQueue() {
    head = nullptr;
}

void EventQueue::printQueue() {
    Event *cursor = head;
    cursor->print();
    length++;
    do {
        cursor = cursor->next;
        cursor->print();
        length++;
    } while (cursor->next != nullptr);
}

void EventQueue::sortQueue() {
    bool unsorted = true;
    while (unsorted) {
        unsorted = false;
        Event *current = head;
        Event *next = current->next;
        while (next != nullptr) {

            if (next->timestamp < current->timestamp) {
                double cTime = current->timestamp;
                double cLength = current->length;
                current->timestamp = next->timestamp;
                current->length = next->length;
                next->timestamp = cTime;
                next->length = cLength;
                unsorted = true;
            }
            current = current->next;
            next = current->next;

        }
    }
}