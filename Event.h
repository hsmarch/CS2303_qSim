//
// Created by Harrison March on 2/13/2018.
//

#ifndef QSIM_HSMARCH_EVENT_H
#define QSIM_HSMARCH_EVENT_H

class Event {
public:
    int getTimeStamp();

    virtual void action();

    Event *getNextEvent();

    void setNextEvent(Event *e);

    void setEventDelay(int d);

    void setTimeStamp(int ts);

    void print();

private:
    int timeStamp;
    Event *next = nullptr;
protected:
    int delay;
};

#endif //QSIM_HSMARCH_EVENT_H
