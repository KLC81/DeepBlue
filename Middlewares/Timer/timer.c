#include <stdio.h>
#include <time.h>

// Timer structure to hold start and end times
typedef struct {
    time_t start_time;
    time_t end_time;
} Timer;

// Function to start the timer
void timer_start(Timer *timer) {
    timer->start_time = time(NULL);
}

// Function to stop the timer
void timer_stop(Timer *timer) {
    timer->end_time = time(NULL);
}

// Function to get the elapsed time in seconds
double timer_elapsed(Timer *timer) {
    return difftime(timer->end_time, timer->start_time);
}

// Function to reset the timer
void timer_reset(Timer *timer) {
    timer->start_time = 0;
    timer->end_time = 0;
}

// Example usage
int main() {
    Timer my_timer;
    timer_start(&my_timer);
    // Simulate a delay
    sleep(2);
    timer_stop(&my_timer);
    printf("Elapsed time: %.f seconds\n", timer_elapsed(&my_timer));
    return 0;
}