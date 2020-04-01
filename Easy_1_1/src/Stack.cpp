//
// Created by vlrez on 17.02.2020.
//

#include "Stack.h"

#include <utility>
#include <stdexcept>

Stack::Stack(int size) {
    this -> max_size = size;
    this -> stack = new std::string[this -> max_size];
}

void Stack::Push(std::string element) {
    if (this -> current_position < max_size)
    {
        this -> current_position++;
        this -> stack[this -> current_position - 1] = std::move(element);
    } else
    {
        throw std::length_error("Stack Overflow");
    }
}

int Stack::Size() const {
    return this -> max_size;
}

int Stack::ContainedNumber() const {
    return this -> current_position;
}

void Stack::Pop() {
    --(this -> current_position);
}

std::string *Stack::Front() {
    return &this -> stack[this -> current_position - 1];
}
