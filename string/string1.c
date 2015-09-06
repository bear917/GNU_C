#include <stdio.h>
#include <string.h>

char string1[] = "Hello, world";
char string2[20];
char string3[] = "this is";
char string4[] = "a test";
char string5[20] = "Hello,";
char string6[] = "wrold";
char *string7;

int main() {
    printf("%s\n", string2);

    strcpy(string2, string1);

    printf("%s\n", string2);

    if (strcmp(string3, string4) == 0) {
        printf("strings are equal\n");
    } else {
        printf("strings are different\n");
        printf("%d\n", strcmp(string3, string4));

    }
    
    printf("%s\n", string5);
    strcat(string5, string6);
    printf("%s\n", string5);

    string7 = string1;
    printf("pointer %s\n", string7);
    
    return 0;
}
