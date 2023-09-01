#include "Commands.h"

void Commands::welcome() {
  std::cout << "Created by mikeTwoTimes\n\n";
  std::cout << " /$$$$$$$$                /$$$$$$$\n";
  std::cout << "|__  $$__/               | $$__  $$\n";
  std::cout << "   | $$  /$$$$$$         | $$  \\ $$  /$$$$$$\n";
  std::cout << "   | $$ /$$__  $$ /$$$$$$| $$  | $$ /$$__  $$\n";
  std::cout << "   | $$| $$  \\ $$|______/| $$  | $$| $$  \\ $$\n";
  std::cout << "   | $$| $$  | $$        | $$  | $$| $$  | $$\n";
  std::cout << "   | $$|  $$$$$$/        | $$$$$$$/|  $$$$$$/\n";
  std::cout << "   |__/ \\______/         |_______/  \\______/\n\n";
  std::cout << "Welcome to my interactive To-Do list application.\n";
  std::cout << "Type 'help' to see a list of available commands.\n\n";
}

void Commands::help() {
  std::cout << "\nclear      Clear the screen.\n";
  std::cout << "delete     Delete a task.\n";
  std::cout << "edit       Edit a task.\n";
  std::cout << "exit       Exit application.\n";
  std::cout << "new        Create a new task.\n";
  std::cout << "open       View a tasks description.\n";
  std::cout << "view       View all task titles.\n";
  std::cout << "welcome    Display welcome banner.\n\n";
}

void Commands::clear() { system("clear"); }

void Commands::unkown() {
  std::cout << "\nUnrecognized command.\n";
  std::cout << "Type 'help' to view list of commands.\n\n";
}

void Commands::view(const std::vector<Task>& todo) {
  if (todo.empty()) {
    std::cout << "\nNo current tasks.\n\n";
    return;
  }

  for (const Task& task : todo) {
    std::cout << "\nTitle: " << task.title << "\n\n";
  }
}

void Commands::new_task(std::vector<Task>& todo) {
  Task temp = Prompts::get_new_input();

  todo.emplace_back(temp);
}

void Commands::open(const std::vector<Task>& todo) {
  std::string title;
  bool found = false;

  if (todo.empty()) {
    std::cout << "\nNo current tasks.\n\n";
    return;
  }

  title = Prompts::get_open_input();

  for (const Task& task : todo) {
    if (title == task.title) {
      std::cout << "\nDescription: " << task.desc << "\n\n";
      found = true;
      break;
    }
  }

  if (!found) {
    std::cout << "\nTask does not exist.\n\n";
  }
}

void Commands::edit(std::vector<Task>& todo) {
  std::string input;
  bool found = false;

  if (todo.empty()) {
    std::cout << "\nNo current tasks.\n\n";
    return;
  }

  input = Prompts::get_edit_input();

  for (Task& task : todo) {
    if (input == task.title) {
      std::cout << "\nEnter an edited description of the task.\n\n";
      std::cout << "[guest@To-Do edit]$ ";
      std::getline(std::cin, task.desc);

      found = true;
      break;
    }
  }

  std::cout << "\n";

  if (!found) {
    std::cout << "\nTask does not exist.\n\n";
  }
}

void Commands::delete_task(std::vector<Task>& todo) {
  std::string title;
  bool found = false;

  if (todo.empty()) {
    std::cout << "\nNo current tasks.\n\n";
    return;
  }

  title = Prompts::get_delete_input();

  for (int i = 0; i < todo.size(); i++) {
    if (title == todo[i].title) {
      todo.erase(todo.begin() + i);
      
      found = true;
      break;
    }
  }

  if (!found) {
    std::cout << "Task does not exist.\n\n";
  }
}

void Commands::exit_app(const std::vector<Task>& todo) {
  File_Output out("tasks.txt");

  out.truncate();
  
  for (const Task& task : todo) {
    out.write_line(task.title);
    out.write_line(task.desc);
  }
}
