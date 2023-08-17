#include "main.h"
/**
 * print_numbers - Entry point
 * Description: print numbers from 0 to 9
 *              not print 2 and 4
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
