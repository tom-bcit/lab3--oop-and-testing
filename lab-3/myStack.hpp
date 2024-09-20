#pragma once
#include <string>


// This class represents a stack object with common functionality such as push, pop, etc.
constexpr int MAX_SIZE = 10;
constexpr int EMPTY_STACK_ERROR = -1;
class MyStack {
public:
    MyStack();

    bool push(int);

    void pop();

    int top() const;

    bool empty() const;

    bool full() const;

    std::string print() const;

private:
    int data[MAX_SIZE];
    int topIndex;

};
