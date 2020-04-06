//
// Created by vlrez on 17.02.2020.
//
#pragma once
#include <string>

class Stack {
public:
    Stack(int size = 20);
    void Push(std::string element);
    int Size() const;
    int ContainedNumber() const;
    void Pop();
    std::string* Front();
private:
    int max_size = 20;
    int current_position = 0;
    std::string* stack;
};
