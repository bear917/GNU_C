#include <stdio.h>

void PrintLabel(char the_label[]) {
    printf("Label: %s\n", the_label);
}

int main(void) {
    char label[] = "Single";

    PrintLabel(label);

    char *labelPtr = label;
    PrintLabel(labelPtr);

    return 0;
}
