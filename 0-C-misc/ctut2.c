#include <stdio.h>
#include <string.h>

#define MYNAME "biff biffson"

int main(){
	char middleInitial;
	
	printf("\n");
	
	printf("What is your middle initial? ");
	
	scanf(" %c", &middleInitial);
	
	char firstName[30], lastName[30];
	
	printf("What is your name? ");
	
	scanf(" %s %s", firstName, lastName);
	
	printf("Your Name is %s %c %s\n\n", firstName, middleInitial, lastName);
	
	int month, day, year;
	
	printf("What's your birth date? ");
	
	scanf(" %d/%d/%d", &month, &day, &year);
	
	printf("\nBirth Date %d/%d/%d\n\n", month, day, year);
}