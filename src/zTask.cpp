#include <zTask.h>
#include "taskRunnerHeader.hpp"

Task taskZ(0, TASK_ONCE, &printTaskZ, &runner, true);

void printTaskZ() {
    Serial.println("taskZ is NOT working as appears alphabetically later than main.cpp");
    taskZ.restartDelayed(TASK_SECOND);
}