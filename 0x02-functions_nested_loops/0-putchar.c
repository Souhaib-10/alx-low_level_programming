#include "main.h"
/**
 *main - Entry point
 *Description: print _putchar with puthcar function
 *Return: always 0
 */
int main(void)
{
	char word[] = "_putchar";
	int lettre;

	for (lettre = 0; lettre < 8; lettre++)
		_putchar(word[lettre]);
	_putchar('\n');

	return (0);
}
