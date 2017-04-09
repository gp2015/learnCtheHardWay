#include <stdio.h>

int main()
{
	
	int secretNumber = 10, numberGuessed = 0;
	
	while(1) 
	{
		printf("Guess my secret number: ");
		
		scanf(" %d", &numberGuessed);
		
		if (numberGuessed == secretNumber) 
		{
			printf("You got it\n");
			break;
		}
	}
	
}