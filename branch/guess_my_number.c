#include <stdio.h>

int main() {
    const int MAGIC_NUMBER = 6;
    int guessed_number;

    printf("Try to guess what number I'm thinking of\n");
    printf("HINT: It's a number between 1 and 10\n");

    printf("enter your guess: ");
    scanf("%d", &guessed_number);

    while (guessed_number != MAGIC_NUMBER) {
        printf("enter your guess: ");
        scanf("%d", &guessed_number);
    }

    printf("You win.\n");

    return 0;
}
