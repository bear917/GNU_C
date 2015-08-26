#include <stdio.h>

int main() {
    int person[10];
    float hourly_wage[4] = {2, 4.9, 10, 123.456};
    int index;
    
    for (index = 0; index < 4; index++) {
        printf("hourly_wage[%d] = %f\n", index, hourly_wage[index]);
    }

    printf("index = %d\n", index);

    index = 7;
    person[index] = 56;

    printf("the %dth person is number %d and earns $%f an hour\n", (index + 1), person[index], hourly_wage[index]);

    return 0;
}
