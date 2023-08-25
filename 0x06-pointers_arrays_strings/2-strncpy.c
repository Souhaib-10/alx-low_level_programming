#include "main.h"
/**
 * strncpy - function that copies a string
 * @dest: pointeur of string
 * @src: pointeur of source string to concat
 * @n: number of size
 * Return: pointeur result
 */

char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
