#include <stdio.h>

int main() {
//    char name[10] = "bear";
    char name[5];

    name[0] = 'b';
    name[1] = 'e';
    name[2] = 'a';
    name[3] = 'r';
    name[4] = '\n';

    printf("%s", name);

    return 0;
}
