#ifndef utils
#define utils
#include "../../src/utils.c"
#endif

void selection_sort(int* array, unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        for (unsigned int j = i + 1; j < size; ++j) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}