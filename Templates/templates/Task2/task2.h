/*Write a function template that can swap two variables of any type. (Difficulty: 1)*/
#pragma once

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T, typename U>
void swap(T& a, U& b) {
    T temp = a;
    a = static_cast<T>(b);
    b = static_cast<U>(temp);
}