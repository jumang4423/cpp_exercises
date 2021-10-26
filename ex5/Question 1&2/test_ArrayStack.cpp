// test_ArrayStack.cpp
#include "ArrayStack.h"

int main(void)
{

    // QUESTION 1

    // Create an instance of ArrayStack named stack1
    // using the default constructor
    ArrayStack stack1;
    // Push 1.0, 2.0, 3.0, 4.0, 5.0 in this stack
    stack1.push(1.0);
    stack1.push(2.0);
    stack1.push(3.0);
    stack1.push(4.0);
    stack1.push(5.0);

    // Create another instance of ArrayStack named stack2
    //   using the other constructor, specify an original size of 5
    ArrayStack stack2(5);
    // Push 1.0, 2.0, ..., 10.0 in this stack
    for (int i = 1; i <= 10; i++)
    {
        stack2.push((double)i);
    }

    // QUESTION 2

    // Copy
    ArrayStack stack3(stack1);
    ArrayStack stack4 = stack2;

    // Assignment
    ArrayStack stack5;
    stack5 = stack1;
    ArrayStack stack6(10);
    stack6 = stack6;

    // COMPLETE
    // Show the content of the stacks 'stack1', 'stack3' and 'stack4' by calls to pop() and top()
    // (use a loop and the method ArrayStack::empty() for the termination condition)

    std::cout << "stack1: " << std::endl;

    while (!stack1.empty())
    {
        std::cout << stack1.top() << std::endl;
        stack1.pop();
    }

    std::cout << "stack3: " << std::endl;

    while (!stack3.empty())
    {
        std::cout << stack3.top() << std::endl;
        stack3.pop();
    }

    std::cout << "stack4: " << std::endl;

    while (!stack4.empty())
    {
        std::cout << stack4.top() << std::endl;
        stack4.pop();
    }

    return 0;
}