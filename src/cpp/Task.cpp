#include "Task.h"

std::vector<Task> Task::init_tasks() {
  File_Input in("tasks.txt");
  std::vector<Task> tasks;
  Task temp;

  while (in.read_line(temp.title)) {
    in.read_line(temp.desc);

    tasks.emplace_back(temp);
  }

  return tasks;
}
