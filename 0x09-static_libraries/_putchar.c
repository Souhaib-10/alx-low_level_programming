#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write the character
 * @c: The character to be written
 *
 *
 * Return: on succes 1 and -1 in error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
