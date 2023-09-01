#ifndef TASK_H
#define TASK_H

#include <vector>
#include "File_Input.h"

struct Task {
  std::string title;
  std::string desc;

  static std::vector<Task> init_tasks();
};

#endif
