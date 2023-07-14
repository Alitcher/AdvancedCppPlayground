/*Create a simple function template that can add two numbers of any type. (Difficulty: 1)*/
#pragma once
#include <iostream>

template <typename T>
T add(T a, T b)
{
    return a + b;
}