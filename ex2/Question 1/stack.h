#ifndef STACK_H
#define STACK_H

// Insert the relevant headers here
#include <iostream>
#include <stdlib.h>

class Stack
{
public:
  Stack(int max_size = 100) : _max_size(max_size),
                              _top(-1), _data(new std::string[max_size]) {}

  ~Stack() { delete[] _data; }

  // interface

  // check whether the stack is empty
  //  bool empty(){
  //      if(_top==0)return 1;
  //      else return 0;
  //  };
  bool empty();
  // check whether the stack is full
  bool full();

  // return the number of elements
  int size();

  // insert element on top
  // print an error message on std::cerr when overflow
  void push(std::string);

  // remove element on top
  // print an error message on std::cerr when underflow
  void pop();
  void test_print();
  // acces the topmost element
  std::string top();

  std::string print_data(int num);

private:
  int _max_size;      // capacity of the fixed-size stack
  int _top;           // index to the top of the stack
  std::string *_data; // data container
};
#endif