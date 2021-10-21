// test_ArrayStack.cpp
#include "ArrayStack.h"

int main(void)
{
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
    // using the copy constructor
    ArrayStack stack2(stack1);
    //   using the other constructor, specify an original size of 5
    ArrayStack stack3(5);
    // Push 1.0, 2.0, ..., 10.0 in this stack
    for (int i = 1; i <= 10; i++)
    {
        stack3.push((double)i);
    }

    return 0;
}