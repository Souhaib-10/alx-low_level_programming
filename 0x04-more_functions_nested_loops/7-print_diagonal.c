#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: parameter function
 * Description:print number slash with number provide
 * Return: nothing just printing
 */
void print_diagonal(int n)
{
	int i, j;
	
	for(i = 0;i < n;i++)
	{
		for(int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

