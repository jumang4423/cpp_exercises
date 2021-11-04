#ifndef LOGFILE_H
#define LOGFILE_H
#include <cstdio>
#include <iostream>

class LogFile {
public:
  LogFile(const char*, const char*);
  ~LogFile();
  void write(const char*);
private:
  FILE* p;
};

#endif