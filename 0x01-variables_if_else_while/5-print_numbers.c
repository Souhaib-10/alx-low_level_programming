#include <stdio.h>
/**
* main - Entry point
* Description: print number 0 to 10
* Return: always retun 0
*/
int main(void)
{
	int number;
	number = 0;
	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
