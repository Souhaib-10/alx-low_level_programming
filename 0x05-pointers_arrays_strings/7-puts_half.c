#include "main.h"
#include <stdio.h>
/**
 * puts_half -prints half of a string, followed by a new line
 * @str: charaters to print half
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int starting;

	while (str[length] != '\0')
	{
		length++;
	}
	starting = (length - 1) / 2 + 1;
	for (i = starting; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
