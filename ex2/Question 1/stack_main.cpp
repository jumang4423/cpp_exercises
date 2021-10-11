#include "stack.h"
#include <iostream>

/**
 * @brief check given value and expected are truly same
 * 
 * @tparam T 
 * @param expected 
 * @param test_value 
 * @return true 
 * @return false 
 */
template <typename T> bool check_given_value_is_truly_same(T expected, T test_value) {
    if (expected == test_value) {
        std::cout << "-o Test passed" << std::endl << std::endl;
        return true;
    } else {
        std::cout << "-! Test failed" << std::endl << std::endl;
        return false;
    }
}

/**
 * @brief main
 * 
 * @return int 
 */
int main(void)
{
  Stack stack_data = Stack();

  // check the stack_data is empty or not
  bool check_is_empty = stack_data.empty();
  std::cout << "check_is_emprty: " << check_is_empty << std::endl;
  check_given_value_is_truly_same(check_is_empty, true);


  // add 100 data to the stack_data
  for (int i = 0; i < 100; i++)
  {
    stack_data.push("data of index " + std::to_string(i));
  }

  // check the stack_data is full or not
  bool check_is_full = stack_data.full();
  std::cout << "isfull: " << check_is_full << std::endl;
  check_given_value_is_truly_same(check_is_full, true);

  // input all datas in the stack_data
  while (!stack_data.empty())
  {
    std::cout << "poped: " << stack_data.print_data(stack_data.size()) << std::endl;
    stack_data.pop();
  }

  std::cout << std::endl;

  // check the stack_data is empty or not again
  check_is_empty = stack_data.empty();
  std::cout << "check_is_emprty: " << check_is_empty << std::endl;
  check_given_value_is_truly_same(check_is_empty, true);

  return 0;
}
