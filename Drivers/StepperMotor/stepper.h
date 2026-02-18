#ifndef STEPPER_H
#define STEPPER_H

// Define stepper motor pins
#define STEP_PIN 2
#define DIR_PIN 3

// Function prototypes
void stepper_init();
void stepper_step(int steps);
void stepper_set_direction(int direction);

#endif // STEPPER_H
