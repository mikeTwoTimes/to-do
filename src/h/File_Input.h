#ifndef FILE_INPUT_H
#define FILE_INPUT_H

#include <fstream>
#include <string>

class File_Input {
public:
  File_Input(const std::string& fname);
  bool read_line(std::string& line);
  bool at_end();
  ~File_Input();

private:
  std::ifstream fin;
};

#endif
