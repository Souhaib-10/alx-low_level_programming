#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print alphabet lowercase
 */
void print_alphabet(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		letter++;
	}
	_putchar('\n');
}
