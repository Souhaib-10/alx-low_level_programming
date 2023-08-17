#include "main.h"
/**
 * print_line - Entry point
 * @n: parameter function
 * Description:print number underscore with number provide
 */
void print_line(int n)
{
	int i;

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

