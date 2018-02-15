#include <iostream>
#include <ctime>
#include "Queue.h"
#include "EventQueue.h"
#include "CustomerEvent.h"

// *** GLOBAL VARIABLES ***
int NUM_TELLERS;
int NUM_CUSTOMERS;
double SIM_TIME;
double AVG_SERVICE_TIME;
int SEED;
int TIMESTAMP = 0;

// *** FUNCTION HEADERS ***
double randomTimeStamp();

double randomServiceTime();


/**
 * Main function for banking simulation written in C++11
 * @param argc
 * @param argv
 * @return 0 on success, 1 on failure
 */
int main(int argc, char *argv[]) {
    if (argc < 4 || argc > 5) {
        std::cerr << "Number of arguments supplied was invalid." << std::endl;
        std::cout << "Usage: ./qSim #customers #tellers simulationTime averageServiceTime <seed>" << std::endl;
        return 1;
    } else {
        NUM_CUSTOMERS = atoi(argv[1]);
        NUM_TELLERS = atoi(argv[2]);
        SIM_TIME = atoi(argv[3]);
        AVG_SERVICE_TIME = atoi(argv[4]);
        if (argc == 5) {
            SEED = atoi(argv[5]);
            srand(SEED);
        } else {
            srand(time(NULL));
        }
    }
    auto *eq = new EventQueue();
    Event *e = new CustomerEvent(0, 0);
    eq->setHead(e);
    for (int c = 1; c < NUM_CUSTOMERS; c++) {
        delete e;
        Event *e;
        e = new CustomerEvent(c, c);
        eq->addToQueue(e);
    }
    eq->printQueue();
    return 0;
}

/**
 * Returns a random timestamp
 * @return int random timestamp
 */
double randomTimeStamp() {
    return (SIM_TIME * rand() / float(RAND_MAX));
}

/**
 * returns a random service time
 * @return int random service time
 */
double randomServiceTime() {
    return (2 * AVG_SERVICE_TIME * rand() / float(RAND_MAX));
}

