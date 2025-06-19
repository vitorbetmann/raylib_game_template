#ifndef EXAMPLE_STATE_H
#define EXAMPLE_STATE_H
// --------------------------------------------------
// Includes
// --------------------------------------------------
#include "stateMachine/StateMachine.h"

// --------------------------------------------------
// Other defines
// --------------------------------------------------

// --------------------------------------------------
// Data types
// --------------------------------------------------

// --------------------------------------------------
// Prototypes
// --------------------------------------------------
void ExampleStateEnter(void *args);
void ExampleStateUpdate(float dt);
void ExampleStateDraw();
void ExampleStateExit();

// --------------------------------------------------
// Variables
// --------------------------------------------------
extern State exampleState;

#endif