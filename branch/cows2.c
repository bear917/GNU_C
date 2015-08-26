# include <stdio.h>

int main() {
    int cows = 2;

    if (cows > 1) {
        printf("We have cows\n");
        printf("%d cows to be precise\n", cows);
    } else {
        if (cows == 0)
            printf("We have no cows at all\n");
        else
            printf("We have only one cow\n");
    }

    if (cows > 10)
        printf("Maybe too many cows.\n");

    return 0;
}
