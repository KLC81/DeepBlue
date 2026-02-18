/*
 * relay.c
 * 
 * Implementation of relay control functions.
 */

#include <stdio.h>

// Function to turn on the relay
void relay_on() {
    printf("Relay is ON\n");
}

// Function to turn off the relay
void relay_off() {
    printf("Relay is OFF\n");
}

// Test the relay control
int main() {
    relay_on();  
    relay_off();
    return 0;
}