#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int digit = 0;
	int index;
	
	printf("Enter a digit: ");
	scanf("%c", &digit);
	 if (isdigit(digit) == 0)
		 printf("Invalid digit entered\n");
	/*sys("clear");*/
	else 
	{
	printf("\nInitial digit: %d\n", digit);
	for (index = 0; index < 10; index++)
		++digit;
	printf("Incremented digit: %d\n", digit);
	}
	return (0);
}

