#include <aTask.h>
#include "taskRunnerHeader.hpp"

Task taskA(0, TASK_ONCE, &printTaskA, &runner, true);

void printTaskA() {
    Serial.println("taskA is working as appears alphabetically earlier than main.cpp");
    taskA.restartDelayed(TASK_SECOND);
}