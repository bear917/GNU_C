#include <stdio.h>

int main() {
    int i;
    char c;
    void *the_data;

    i = 6;
    c = 'a';

    the_data = &i;
    printf("the data points to the integer value %d\n", *(int*) the_data);

    the_data = &c;
    printf("the data now points to the character %c\n", *(char*) the_data);

    return 0;
}
