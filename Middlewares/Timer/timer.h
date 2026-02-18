# Timer Management Header

#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

// Function to start the timer
void start_timer();

// Function to stop the timer
void stop_timer();

// Function to get the elapsed time
uint32_t get_elapsed_time();

#endif // TIMER_H
