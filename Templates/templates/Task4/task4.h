/*Create a function template to find the larger of an array of items. Test it with arrays of integers, doubles, and strings. (Difficulty: 2)*/
#pragma once

template <typename T>
T findLarger(const T* array, int size) {
    T maxElement = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    return maxElement;
}