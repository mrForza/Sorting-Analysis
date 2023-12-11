#include <stdio.h>
#include "../sorting/quadratic/insertion_sort.c"
#include "../sorting/quadratic/selection_sort.c"
#include "../sorting/quadratic/bubble_sort.c"

int main() {
    int array[] = {5, -342, 75, 12, 0, 0, 33, 67, 76345, 23, 12};
    unsigned int size = sizeof(array) / sizeof(array[0]);
    double q = measure_time(&bubble_sort, array, size);
    printf("%lf", q);
    return 0;
}
