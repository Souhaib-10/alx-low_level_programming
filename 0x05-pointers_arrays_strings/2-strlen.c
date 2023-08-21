#include "main.h"
#include <string.h>
/**
 * _strlen - Entry point
 * @s: string give
 * Description: count length of string given
 * Return: value length
 */
int _strlen(char *s)
{
	size_t length_str;

	length_str = strlen(*s);
	return (length_str);
}
