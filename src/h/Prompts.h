#ifndef PROMPTS_H
#define PROMPTS_H

#include <iostream>
#include <cctype>
#include "Task.h"

namespace Prompts {
  std::string get_home_input();
  Task get_new_input();
  std::string get_open_input();
  std::string get_edit_input();
  std::string get_delete_input();
}

#endif
