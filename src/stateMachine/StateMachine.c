// --------------------------------------------------
// Includes
// --------------------------------------------------
#include "stateMachine/StateMachine.h"
#include <stdlib.h>

// --------------------------------------------------
// Defines
// --------------------------------------------------

// --------------------------------------------------
// Data types
// --------------------------------------------------

// --------------------------------------------------
// Prototypes
// --------------------------------------------------

// --------------------------------------------------
// Variables
// --------------------------------------------------
State *currState = NULL;

// --------------------------------------------------
// Functions
// --------------------------------------------------
void SMChangeState(State *state, void *args) {
  if (currState && currState->Exit) {
    currState->Exit();
  }

  currState = state;

  if (currState && currState->Enter) {
    currState->Enter(args);
  }
}

void SMUpdate(float dt) {
  if (currState && currState->Update) {
    currState->Update(dt);
  }
}

void SMDraw(float dt) {
  if (currState && currState->Draw) {
    currState->Draw();
  }
}