#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

// --------------------------------------------------
// Includes
// --------------------------------------------------

// --------------------------------------------------
// Other defines
// --------------------------------------------------

// --------------------------------------------------
// Data types
// --------------------------------------------------
typedef enum {
  STATE_NAME_EXAMPLE,
} StateID;

typedef struct {
  void (*Enter)(void *args);
  void (*Update)(float dt);
  void (*Draw)();
  void (*Exit)();
} State;

// --------------------------------------------------
// Prototypes
// --------------------------------------------------
void SMChangeState(State *state, void *args);
void SMUpdate(float dt);
void SMDraw(float dt);

// --------------------------------------------------
// Variables
// --------------------------------------------------
extern State *currState;

#endif