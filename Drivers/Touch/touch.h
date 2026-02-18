// touch.h 

#ifndef TOUCH_H
#define TOUCH_H

/**
 * @brief Initializes the touch screen.
 */
void initTouchScreen();

/**
 * @brief Reads the coordinates touched on the screen.
 *
 * @param x Pointer to store the x coordinate.
 * @param y Pointer to store the y coordinate.
 * @return 1 if touch detected, 0 otherwise.
 */
int readTouchCoordinates(int *x, int *y);

/**
 * @brief Clears the touch screen state.
 */
void clearTouchScreen();

#endif // TOUCH_H