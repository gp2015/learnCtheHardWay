#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 1) {
		printf("No one wins an argument\n");
	}
	else if (argc > 2 && argc < 4) {
		printf("Now you're arguing with yourself\n");
	}
	else {
		printf("You win.\n");
	}

	return 0;
}
