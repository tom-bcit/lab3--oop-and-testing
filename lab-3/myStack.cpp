#include "myStack.hpp"
#include <iostream>

MyStack :: MyStack() {
    topIndex = -1;
}

bool MyStack :: push(int val) {
    if (topIndex == MAX_SIZE - 1) {
    return false;
    } else {
    data[++topIndex] = val;
    }
    return true;
}
void MyStack :: pop() {
    if (topIndex == -1) {

    } else {
        topIndex--;
    }
}
int MyStack :: top() const{
    if (topIndex == -1) {
        return EMPTY_STACK_ERROR;
    }
    return data[topIndex];
}
bool MyStack :: empty() const {
    return topIndex == -1;
}
bool MyStack :: full() const {
    return topIndex == MAX_SIZE - 1;
}

std::string MyStack :: print() const {
    if (topIndex == -1) {
        std::cout << "Empty Stack" << std::endl;
    }
    std::string output;
    for (int i = 0; i <= topIndex; i++) {
        output += std::to_string(data[i]);
        output += " ";
    }
    return output;
}
