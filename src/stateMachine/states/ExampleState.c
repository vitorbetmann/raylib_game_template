#include "stateMachine/states/ExampleState.h"

// Data types
// ----------
State exampleState = {.id = STATE_NAME_EXAMPLE,
                      .Enter = ExampleStateEnter,
                      .Update = ExampleStateUpdate,
                      .Draw = ExampleStateDraw,
                      .Exit = ExampleStateExit};

// Variables
// ---------

// Prototypes
// ----------
void ExampleStateEnter(void *args) {
  // Check if args is of correct type or NULL
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