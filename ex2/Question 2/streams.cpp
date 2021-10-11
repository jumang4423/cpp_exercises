#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include "../Question 1/Stack.h"

void drawLine(int str_len)
{
    for (int i = 0; i < str_len; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
}

/**
 * @brief main function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[])
{

    // check arguments
    if (argc != 2)
    {
        std::cout << "Usage: ./streams_main <input file>" << std::endl;
        return 1;
    }

    Stack stack_data = Stack();
    std::ifstream ifs(argv[1]);

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

    // print

    drawLine(max_string_len);

    for (int i = 0; i < file_len; i++)
    {
        std::string str = stack_data.top();
        std::cout << str << std::endl;
        stack_data.pop();
    }

    drawLine(max_string_len);

    return 0;
}