#include <stdio.h>
#include <ctype.h>

// use the ',' (comma) to init letter in the for-loop
// make it handle all of the args passed with another for-loop

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}

	int i = 0;
	for (i = 0; argv[1][i] != '\0'; i++) {
		char letter = tolower(argv[1][i]);
		// or - 32 to make uppercase, +32 to make lowercase
		// this will only work with uppercase input
		// char letter = argv[1][i] + 32;

		// this will only work with lowercase input
		// char letter = argv[1]i] - 32;

		switch (letter) {
			case 'a':
			// case 'A':
				printf("%d: 'A'\n", i);
				break;

			case 'e':
			// case 'E':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			// case 'I':
				printf("%d: 'I'\n", i);
				break;

			case 'o':
			// case 'O':
				printf("%d: 'O'\n", i);
				break;

			case 'u':
			// case 'U':
				printf("%d: 'U'\n", i);
				break;

			case 'y':
			// case 'Y':
				if (i > 0) {
					// it's only sometimes Y
					printf("%d: 'Y'\n", i);
					break;
				}

			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}

	return 0;
}
