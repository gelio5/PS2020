//
// Created by vlrez on 07.04.2020.
//

#include "Sort.h"

template<typename T> bool less(T arg1, T arg2)
{
    return arg1 <= arg2;
}

template<typename T> bool greater(T arg1, T arg2)
{
    return arg1 > arg2;
}

bool less(int arg1, int arg2)
{
    return arg1 <= arg2;
}
