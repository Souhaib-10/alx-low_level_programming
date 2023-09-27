#include "main.h"
/**
 * print_square - Entry point
 * Return:nothing just printing
 * @size: parameter giving by writer
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; size > i; i++)
	{
		for (j = 0; size > j; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
