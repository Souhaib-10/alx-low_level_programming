#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: copy bytes
 * @src: copy from
 * @n: number of bytes to copy
 * Return: copy bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
