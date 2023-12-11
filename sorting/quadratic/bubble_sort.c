#ifndef utils
#define utils
#include "../../src/utils.c"
#endif

void bubble_sort(int* array, unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        for (unsigned int j = 1; j < size - i; ++j) {
            if (array[j - 1] > array[j]) {
                swap(&array[j - 1], &array[j]);
            }
        }
    }
}