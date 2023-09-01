#include "Commands.h"

int main() {
  std::vector<Task> todo = Task::init_tasks(); 
  bool loop = true;
  std::string input;

  Commands::clear();
  Commands::welcome();
  
  while (loop) {
    input = Prompts::get_home_input();
    
    if (input == "help") {
      Commands::help();
    } else if (input == "welcome") {
      Commands::welcome();
    } else if (input == "clear") {
      Commands::clear();
    } else if (input == "view") {
      Commands::view(todo);
    } else if (input == "new") {
      Commands::new_task(todo);
    } else if (input == "open") {
      Commands::open(todo);
    } else if (input == "edit") {
      Commands::edit(todo);
    } else if (input == "delete") {
      Commands::delete_task(todo);
    } else if (input == "exit") {
      Commands::exit_app(todo);
      loop = false;
    } else {
      Commands::unkown();
    }
  }
}
