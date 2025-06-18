#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

// Data types
// ----------
typedef enum {
  STATE_NAME_EXAMPLE,
  STATE_NAME_EXAMPLE_2,

} StateID;

typedef struct {
  StateID id;
  void (*Enter)(void *args);
  void (*Update)(float dt);
  void (*Draw)();
  void (*Exit)();
} State;

// Variable
// --------
extern State *currState;

// Prototypes
// ----------
void SMChangeState(State *state, void *args);

#endif