#ifndef FILE_OUTPUT_H
#define FILE_OUTPUT_H

#include <fstream>
#include <string>

class File_Output {
public:
  File_Output(const std::string& name);
  void write_line(const std::string& line);
  void truncate();
  ~File_Output();
  
private:
  std::ofstream fout;
  std::string fname;
};

#endif
