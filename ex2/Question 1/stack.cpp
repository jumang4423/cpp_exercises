#include <stdlib.h>
#include "stack.h"

/**
 * @brief check is stack is empty
 * 
 * @return true 
 * @return false 
 */
bool Stack::empty()
{
    return _top == -1;
}

/**
 * @brief check is stack is full
 * 
 * @return true 
 * @return false 
 */
bool Stack::full()
{
    return _top == _max_size - 1;
}

/**
 * @brief push element to stack
 * 
 * @return int 
 */
int Stack::size()
{
    return _top;
}

/**
 * @brief push element to stack
 * 
 * @param element 
 * @return true 
 * @return false 
 */
void Stack::push(std::string str_value)
{
    _top++;
    if (_top == _max_size)
        std::cerr << "ERR: stack overflow";
    _data[_top] = str_value;
}

/**
 * @brief pop element from stack
 * 
 */
void Stack::pop()
{
    if (_top == -1)
        std::cout << "ERR: stack underflow" << std::endl;
    else
        _top--;
}

/**
 * @brief get all element from stack
 * 
 */
void Stack::test_print()
{
    std::cout << "Stack: ";
    for (int i = 0; i <= _top; i++)
        std::cout << _data[i] << " ";
    std::cout << std::endl;
}

/**
 * @brief print data by specified index
 * 
 * @param num 
 * @return std::string 
 */
std::string Stack::print_data(int num)
{
    if (num < 0 || num > _top)
    {
        return "error";
    }
    return _data[num];
}