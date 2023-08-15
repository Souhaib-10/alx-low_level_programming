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
	int length = strlen(word)

	for (letter = 0; letter < word; letter++)
		_putchar(word[lettre]);
	_putchar('\n');

	return (0);
}
