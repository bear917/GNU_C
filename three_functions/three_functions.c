#include <stdio.h>

/* funciton declarations */
int first_function(void);
int goodbye(void);

// funciton definition
int main() {
	printf("the program begins...\n");
	first_function();
	goodbye();

	return 0;
}

// function definition
int first_function() {
	/* this funciton does nothing */
	return 0;
}

// funciton declaration
int goodbye() {
	printf("...and the program ends.\n");

	return 0;
}
