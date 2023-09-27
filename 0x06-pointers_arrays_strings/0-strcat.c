#include "main.h"
/**
 * _strcat - to concatonate to string
 * @dest: first string
 * @src: characters to add at dest
 * Return: pointeur to result string dest
 * Description: concatonate two string in one
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
