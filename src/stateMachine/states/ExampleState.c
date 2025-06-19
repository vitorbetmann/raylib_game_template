// --------------------------------------------------
// Includes
// --------------------------------------------------
#include "stateMachine/states/ExampleState.h"

// --------------------------------------------------
// Defines
// --------------------------------------------------

// --------------------------------------------------
// Data types
// --------------------------------------------------
State exampleState = {.Enter = ExampleStateEnter,
                      .Update = ExampleStateUpdate,
                      .Draw = ExampleStateDraw,
                      .Exit = ExampleStateExit};

// --------------------------------------------------
// Prototypes
// --------------------------------------------------

// --------------------------------------------------
// Variables
// --------------------------------------------------

// --------------------------------------------------
// Functions
// --------------------------------------------------
void ExampleStateEnter(void *args) {
  // Check if args is of correct type
  // Initialize stuff
}

void ExampleStateUpdate(float dt) {
  // Update
}

void ExampleStateDraw() {
  // Draw
}

void ExampleStateExit() {
  // Unload stuff
  // Maybe fill out an args struct
  // If needed, call ChangeState to new state
}