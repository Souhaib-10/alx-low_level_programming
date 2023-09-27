#include "main.h"
/**
 * *_memset - The _memset() function that fills memory with a constant byte
 * @s: first argument
 * @b: constant
 * @n: number of byte
 * Return: new value of first argument
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
