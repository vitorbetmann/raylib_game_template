#ifndef EXAMPLE_STATE_H
#define EXAMPLE_STATE_H
#include "stateMachine/StateMachine.h"

// Data Types
// ----------

// Variables
// ---------
extern State exampleState;

// Prototypes
// ----------
void ExampleStateEnter(void *args);
void ExampleStateUpdate(float dt);
void ExampleStateDraw();
void ExampleStateExit();

#endif