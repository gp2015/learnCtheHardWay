#include <stdio.h>

int main(int argc, char *argv)
{
	char a = 'a';
	int i = 10;
	int total = a + i; // 107
	printf("'a' as int: %i\n", a);
	printf("total: %d\n", total);

	a -= 32;

	printf("'a' - 32: %c\n", a);

	return 0;
}
