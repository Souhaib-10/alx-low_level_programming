#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Entry point
* Description: assign a random number to the variable n
* Return: always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, n % 10);
	if (n > 5 && (n % 10) != 0)
	{
		printf("greater than 5\n");
	}
	else if (n < 6  && (n % 10) != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}