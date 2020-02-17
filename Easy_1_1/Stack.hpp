//
// Created by vlrez on 17.02.2020.
//

#include <string>

#ifndef EASY_1_1_STACK_HPP
#define EASY_1_1_STACK_HPP


class Stack {
public:
    Stack();
    Stack(std::string a);
    void Push(std::string a);
    int Size();
    int ContainedNumber();
    void Pop();
    std::string* Front();
private:
    const int MaxSize = 20;
    int counter;
    std::string* stack;
};


#endif //EASY_1_1_STACK_HPP
