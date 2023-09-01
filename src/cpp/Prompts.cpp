#include "Prompts.h"

std::string Prompts::get_home_input() {
  std::string input;

  std::cout << "[guest@To-Do ~]$ ";
  std::cin >> input;

  for (char& let : input) {
    let = tolower(let);
  }

  return input;
}

Task Prompts::get_new_input() {
  Task temp;

  std::cout << "\nEnter a task title, then enter a short description.\n\n";
  std::cout << "[guest@To-Do new]$ ";
  std::cin.ignore();
  std::getline(std::cin, temp.title);

  for (char& let : temp.title) {
    let = toupper(let);
  }

  std::cout << "\n[guest@To-Do new]$ ";
  std::getline(std::cin, temp.desc);
  std::cout << "\n";

  return temp;
}

std::string Prompts::get_open_input() {
  std::string input;

  std::cout << "\nEnter a task title you wish to open.\n\n";
  std::cout << "[guest@To-Do open]$ ";
  std::cin.ignore();
  std::getline(std::cin, input);

  for (char& in : input) {
    in = toupper(in);
  }

  return input;
}

std::string Prompts::get_edit_input() {
  std::string input;

  std::cout << "\nEnter a task title you wish to edit.\n\n";
  std::cout << "[guest@To-Do edit]$ ";
  std::cin.ignore();
  std::getline(std::cin, input);

  for (char& in : input) {
    in = toupper(in);
  }

  return input;
}

std::string Prompts::get_delete_input() {
  std::string input;

  std::cout << "\nEnter a task title you wish to delete.\n\n";
  std::cout << "[guest@To-Do delete]$ ";
  std::cin.ignore();
  std::getline(std::cin, input);
  std::cout << "\n";
  
  for (char& in : input) {
    in = toupper(in);
  }

  return input;
}
