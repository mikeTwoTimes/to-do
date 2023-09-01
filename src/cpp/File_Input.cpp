#include "File_Input.h"

File_Input::File_Input(const std::string& fname) : fin(fname) {}

bool File_Input::read_line(std::string& line) { return bool(std::getline(fin, line)); }

bool File_Input::at_end() { return fin.eof(); }

File_Input::~File_Input() { fin.close(); }
