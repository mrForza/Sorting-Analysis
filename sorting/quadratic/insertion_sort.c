#ifndef utils
#define utils
#include "../../src/utils.c"
#endif


void insertion_sort(int* array, unsigned int size) {
    for (int i = 1; i < size; ++i) {
        int k = i;
        while (k > 0 && array[k - 1] > array[k]) {
            swap(&array[k - 1], &array[k]);
            --k;
        }
    }
}