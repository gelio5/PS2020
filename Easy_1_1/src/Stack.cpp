//
// Created by vlrez on 17.02.2020.
//

#include "Stack.h"

#include <utility>

Stack::Stack(){
    this -> stack = new std::string[this -> MaxSize];
    this -> counter = 0;
}

Stack::Stack(int size) {
    this -> MaxSize = size;
    this -> stack = new std::string[this -> MaxSize];
    this -> counter = 0;
}

void Stack::Push(std::string element) {
    if (this -> counter < MaxSize)
    {
        this -> counter++;
        this -> stack[this -> counter - 1] = std::move(element);
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
