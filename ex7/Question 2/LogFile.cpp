#include <stdexcept>
#include <cstdio>
#include <iostream>

#include "LogFile.h"

LogFile::LogFile(const char* n, const char* a)
{
  p = fopen(n, a);
}

LogFile::~LogFile() { fclose(p); }

void LogFile::write(const char* s)
{
  fputs(s, p);
}