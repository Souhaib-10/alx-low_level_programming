#include "main.h"
/**
 * more_numbers - Entry point
 * Decription: print 10 time numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
	}
	_putchar('\n');
}
