#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include "../Question 1/Stack.h"

/**
 * @brief check given value and expected are truly same
 * 
 * @tparam T 
 * @param expected 
 * @param test_value 
 * @return true 
 * @return false 
 */
template <typename T>
bool check_given_value_is_truly_same(T expected, T test_value)
{
    if (expected == test_value)
    {
        std::cout << "-o Test passed" << std::endl
                  << std::endl;
        return true;
    }
    else
    {
        std::cout << "-! Test failed" << std::endl
                  << std::endl;
        return false;
    }
}

/**
 * @brief main function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(void)
{

    Stack stack_data = Stack();
    std::ifstream ifs("data.txt");

    // read file
    std::string _line;
    int max_string_len = 0;

    // get string number
    std::getline(ifs, _line);
    int file_len = stoi(_line);

    for (int i = 0; i < file_len; i++)
    {
        // get string
        std::getline(ifs, _line);
        std::string new_str = _line;
        max_string_len = max_string_len < new_str.length() ? new_str.length() : max_string_len;
        stack_data.push(new_str);
    }

    // check stack size
    int file_stack_len = stack_data.size();
    std::cout << "file_string_len: " << file_stack_len + 1 << std::endl;
    check_given_value_is_truly_same(file_stack_len + 1, file_len);

    // check stack size
    std::cout << "max_string_len: " << max_string_len << std::endl;
    check_given_value_is_truly_same(max_string_len, 7);

    return 0;
}