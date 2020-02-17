//
// Created by vlrez on 17.02.2020.
//

#include "Stack.hpp"

#include <utility>

Stack::Stack() {
    this -> stack = new std::string[this -> MaxSize];
    this ->counter = 0;
}

Stack::Stack(std::string a) {
    this -> stack = new std::string[this -> MaxSize];
    this -> stack[0] = std::move(a);
    this -> counter = 1;
}

void Stack::Push(std::string a) {
    if (this -> counter < 20)
    {
        this -> counter++;
        this -> stack[this -> counter - 1] = std::move(a);
    } else
        throw std::exception("Stack Overflow");
}

int Stack::Size() {
    return this -> MaxSize;
}

int Stack::ContainedNumber() {
    return this -> counter;
}

void Stack::Pop() {
    this -> stack[this -> counter - 1] = "";
    this -> counter--;
}

std::string *Stack::Front() {
    return &this -> stack[this -> counter - 1];
}
