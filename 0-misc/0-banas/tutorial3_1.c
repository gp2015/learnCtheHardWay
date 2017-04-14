#include <stdio.h>

// Needed for exit()
#include <stdlib.h>

void main() {

	int whatToDo = 0;

	do {
		printf("\n");
		printf("1. What Time is it?\n");
		printf("2. What is the date?\n");
		printf("3. What day is it?\n";
		printf("4. Quit\n");

		scanf(" %d", &whatToDo);
		
	} while (whatToDo < 1 || whatToDo > 4);
	exit(0)
}
