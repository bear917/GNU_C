#include <stdio.h>

int swap_ints(int *first_number, int *second_number) {
    int temp;

    temp = *first_number;
    *first_number = *second_number;
    *second_number = temp;

    return 0;
}
