#include "main.h"
/**
 * print_rev - print reverse word
 * @s: string given
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	length = _strlen(s);
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
