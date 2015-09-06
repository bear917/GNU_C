#include <stdio.h>
#include <string.h>


int main() {
    char string1[] = "Hello, world";
    char string2[20];

    strcpy(string2, "bear");

    printf("%s\n%s\n", string1, string2);

    return 0;
}
