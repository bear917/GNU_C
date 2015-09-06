#include <stdio.h>
#include <string.h>

struct Person {
    int age;
    char name[40];
    int height_in_cm;
};

int main() {
    struct Person hero = { 20, "Robin Hood", 191};
    struct Person sidekick;

    printf("Hero %s is %d years old and %d cm.\n", hero.name, hero.age, hero.height_in_cm);

    sidekick.age = 31;
    strcpy(sidekick.name, "John Little");
    sidekick.height_in_cm = 237;

    printf("%s is %d years old and stands %dcm tall in his sock\n", sidekick.name, sidekick.age, sidekick.height_in_cm);

    printf("He is often seen with %s.\n", hero.name);

    return 0;
}
