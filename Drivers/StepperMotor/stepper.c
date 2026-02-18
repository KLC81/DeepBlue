#include <stdio.h>
#include <stdlib.h>

// Define the stepper motor structure
typedef struct {
    int steps_per_revolution;
    int current_step;
} StepperMotor;

// Initialize the stepper motor
void initStepper(StepperMotor *motor, int steps_per_revolution) {
    motor->steps_per_revolution = steps_per_revolution;
    motor->current_step = 0;
}

// Step the motor
void step(StepperMotor *motor, int steps) {
    motor->current_step += steps;
    motor->current_step %= motor->steps_per_revolution; // Loop back to 0 if exceeds
}

// Rotate the motor a specific number of steps
void rotate(StepperMotor *motor, int degrees) {
    int steps = (motor->steps_per_revolution * degrees) / 360;
    step(motor, steps);
}

// Main function for testing
int main() {
    StepperMotor motor;
    initStepper(&motor, 200); // 200 steps per revolution
    rotate(&motor, 90); // Rotate 90 degrees
    printf("Current Step: %d\n", motor.current_step);
    return 0;
}