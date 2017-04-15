#include <stdio.h>

// Needed for exit()
#include <stdlib.h>

int main() {

	int whatToDo = 0;

	do {
		printf("\n");
		printf("1. What Time is it?\n");
		printf("2. What is the date?\n");
		printf("3. What day is it?\n");
		printf("4. Quit\n");

		scanf(" %d", &whatToDo);

	} while (whatToDo < 1 || whatToDo > 4);



	if (whatToDo == 1) {
		printf("Print the time\n");
	}
	else if (whatToDo == 2) {
		printf("Print the date\n");
	}
	else if (whatToDo == 3) {
		printf("Print the day\n");
	}
	else {
		printf("Bye bye\n");

		// Almost always better to use return
		// exit(0); // commented out to exit in below switch
	}



	printf("\n");



	switch(whatToDo) {
		case(1):
			printf("Print the time\n");
			break;

		case(2):
			printf("Print the date\n");
			break;

		case(3):
			printf("Print the day\n");
			break;

		default:
			printf("Bye bye\n");
			exit(0);
			break;
	}

	return 0;

}
