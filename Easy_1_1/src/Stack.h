//
// Created by vlrez on 17.02.2020.
//

#include <string>

#ifndef EASY_1_1_STACK_H
#define EASY_1_1_STACK_H


class Stack {
public:
    Stack();
    explicit Stack(int size);
    void Push(std::string element);
    int Size();
    int ContainedNumber();
    void Pop();
    std::string* Front();
private:
    int MaxSize = 20;
    int counter;
    std::string* stack;
};


#endif //EASY_1_1_STACK_H
