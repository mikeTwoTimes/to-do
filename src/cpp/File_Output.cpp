#include "File_Output.h"

File_Output::File_Output(const std::string& name) : fout(name), fname(name) {}

void File_Output::write_line(const std::string& line) { fout << line << "\n"; }

void File_Output::truncate() {
  fout.close();

  fout.open(fname, std::ios::trunc);
}

File_Output::~File_Output() { fout.close(); }
