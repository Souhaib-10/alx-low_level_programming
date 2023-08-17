#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: parameter function
 * Description:print number slash with number provide
 * Return: nothing just printing
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		 _putchar(' ');
		n--;
	}
	_putchar('\n');
}

