// exception.cpp
#include <stdexcept>
#include <cstdio>
#include <iostream>

#include "LogFile.h"

LogFile logger("logfile.txt", "w+") ;


void doSomeComputation() {   
  logger.write("failure during doing some computation\n");
}

void example() {
 logger.write("log - 1\n");
 // Call a function that performs some computation and may throw 
 // an exception
 doSomeComputation();
 logger.write("log - 2\n");
 std::cout << "closing logfile" << std::endl;
}

int main(void) {
 std::cout << "Calling example()" << std::endl;
 example();
 std::cout << "After calling example()" << std::endl;
 return 0;
}