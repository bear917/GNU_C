#include "swap_ints.h"
#include <stdio.h>

int main() {
    int a = 66, b = 55;

    printf("pre-swap values are: (a, b) == (%d, %d)\n", a, b);

    swap_ints(&a, &b);

    printf("pre-swap values are: (a, b) == (%d, %d)\n", a, b);

    return 0;
}
