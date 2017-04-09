#include <stdio.h>

int main()
{
	
	int num1 = 1, num2 = 2;
	
	printf("Is 1 > 2 : %d\n\n", num1 > num2);
	
	if(num1 > num2)
	{
		printf("%d is greater than %d\n\n", num1, num2);
	}
	else if (num1 < num2)
	{
		printf("%d is less than %d\n\n", num1, num2);
	}
	else
	{
		printf("%d is equal to %d\n\n", num1, num2);
	}
	
	int custAge = 38;
	
	if (custAge > 21 && custAge < 35)
	{
		printf("They are welcome.\n\n");
	}
	else 
	{
		printf("They are not welcome\n\n");
	}
	printf("! turns a true into a false : %d\n\n", !1);
	
	int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;
		
	if ((bobMissedDays < 10 && (bobTotalSales > 30000 || bobNewCust > 30)))
	{
		printf("Bob gets raise\n\n");
	}
	else
	{
		printf("Bob doesn't!\n\n");
	}
	
	char* legalAge = (custAge > 21) ? "true" : "false";
	
	printf("Is the cust legal age? %s\n\n", legalAge);
	
	int numOfProducts = 10;
	
	printf("I bought %s products\n\n", (numOfProducts > 1) ? "many" : "one");
	
	
}