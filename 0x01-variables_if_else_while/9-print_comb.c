#include <stdio.h>
/**
* main- Entry point
* Description: Print numbers from 0 to 9 separate by comma and space
* Return: Always zero value
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
