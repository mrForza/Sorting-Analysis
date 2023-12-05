#include <stdio.h>
#include "../sorting/quadratic/insertion_sort.c"

int main() {
    int array[] = {5, -342, 75, 12, 0, 0, 33, 67, 76345, 23, 12};
    unsigned int size = sizeof(array) / sizeof(array[0]);
    insertion_sort(array, size);
    for (unsigned int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
