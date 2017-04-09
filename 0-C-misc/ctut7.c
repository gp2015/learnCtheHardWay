#include <stdio.h>

int main() 
{
	char sizeOfShirt;
	
	do
	{
		
		printf("What size of shirt (S, M, L): ");
		scanf(" %c", &sizeOfShirt);
		
	} while (sizeOfShirt != 'S' && sizeOfShirt != 'M' && sizeOfShirt != 'L');
}