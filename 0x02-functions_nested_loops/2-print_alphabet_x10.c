#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: print alphabet lowercase 10 time
 */
void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		char lettre = 'a';

		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
		_putchar('\n');
	}
}
