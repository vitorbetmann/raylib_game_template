#include "stateMachine/StateMachine.h"
#include "stateMachine/states/ExampleState.h"
#include "stdlib.h"
#include <raylib.h>

int main(void) {
  InitWindow(1920, 1080, "My Game");
  SMChangeState(&exampleState, NULL);

  float dt;
  while (!WindowShouldClose()) {
    dt = GetFrameTime();
    currState->Update(dt);
    currState->Draw();
  }

  SMUnload();
  return 0;
}