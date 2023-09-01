#ifndef COMMANDS_H
#define COMMANDS_H

#include "Prompts.h"
#include "File_Output.h"

namespace Commands {
  void welcome();
  void clear();
  void help();
  void unkown();
  void view(const std::vector<Task>& todo);
  void new_task(std::vector<Task>& todo);
  void open(const std::vector<Task>& todo);
  void edit(std::vector<Task>& todo);
  void delete_task(std::vector<Task>& todo);
  void exit_app(const std::vector<Task>& todo);
}

#endif
