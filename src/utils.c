#include <sys/time.h>
#include "windows.h"

#define MULTIPLIER 1000000

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

unsigned long measure_time(void (*sorting_algorithm) (int* array, unsigned int size), int* array, unsigned int size) {
    struct timeval start_time, finish_time;
    gettimeofday(&start_time, NULL);
    sorting_algorithm(array, size);
    gettimeofday(&finish_time, NULL);

    unsigned long start_time_in_microseconds = MULTIPLIER * start_time.tv_sec + start_time.tv_usec;
    unsigned long finish_time_in_microseconds = MULTIPLIER * finish_time.tv_sec + finish_time.tv_usec;

    return finish_time_in_microseconds - start_time_in_microseconds;
}