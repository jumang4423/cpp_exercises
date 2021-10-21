// ArrayStack.h

#include <string>
#include <iostream>

#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

class ArrayStack
{
private:
    int _num_items;      // number of items in the stack
    double *_items;      // stack items
    int _allocated_size; // size of memory allocated

    void resize(int max_size)
    {
        if (max_size == 0)
            max_size++;

        // Move stack to a new array of size max
        _allocated_size = max_size;
        double *temp = new double[max_size];
        // Copy
        for (int i = 0; i < _num_items; ++i)
        {
            temp[i] = _items[i];
        }
        delete[] _items;
        _items = temp;
    }

public:
    // Constructors:
    ArrayStack()
    {
        _num_items = 0;
        _allocated_size = 0;
        _items = nullptr;
    }

    explicit ArrayStack(int allocated_size)
    {
        _num_items = 0;
        _allocated_size = allocated_size;
        _items = new double[allocated_size];
    }

    ArrayStack(const ArrayStack &obj){
        _num_items = obj._num_items;
        _allocated_size = obj._allocated_size;
        _items = new double[_allocated_size];
        for (int i = 0; i < _num_items; ++i)
        {
            _items[i] = obj._items[i];
        }
    }

    // Destructor:
    ~ArrayStack()
    {
        delete[] _items;
    }

    void push(double item)
    {
        if (_num_items == _allocated_size)
            resize(2 * _allocated_size);
        _items[_num_items++] = item;
    }

    void pop()
    {
        _num_items--;
        if (_num_items > 0 && _num_items == _allocated_size / 4)
            resize(_allocated_size / 2);
    }

    double top()
    {
        return _items[_num_items - 1];
    }

    bool empty() const { return _num_items == 0; }

    int size() const { return _num_items; }
};

#endif // ARRAY_STACK_H