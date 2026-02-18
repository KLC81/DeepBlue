# Communication Module

/*
 * Communication module header.
 * This file contains definitions and declarations for the communication functionalities.
 */

#ifndef COMMUNICATION_H
#define COMMUNICATION_H

// Function prototypes
void initCommunication();
void sendMessage(const char* message);
const char* receiveMessage();

#endif // COMMUNICATION_H
