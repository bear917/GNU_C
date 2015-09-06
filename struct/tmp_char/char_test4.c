#include <stdio.h>

int main(int argc, char *argv[])
{
    typedef struct
    {
        char *name;
        char *surname;
        int unsigned age;
    } person;

    person p = {"John", "Doe",30};

    printf("Name: %s; Age: %d\n",p.name,p.age);

    p.age = 25;
    p.name = "Jane";

    printf("Name: %s; Age: %d\n",p.name,p.age);

    return 0;
}
