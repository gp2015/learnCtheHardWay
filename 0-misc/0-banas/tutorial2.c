#include <stdio.h>

int main(int argc, char *argv[]) {

	printf("\n");

	int numberHowBig = 0;

	printf("How many bits? ");
	scanf(" %d", &numberHowBig);
	printf("\n");

	printf("numberHowBig: %d\n", numberHowBig);
	printf("&numberHowBig: %p\n", &numberHowBig);

	return 0;
}
