#include "main.h"
/**
 * *_strncat - function to concat
 * *@dest: pointer to destination string.
 * *@src: pointer to src string.
 * @n: number of bytes
 * Return: pointer result string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
