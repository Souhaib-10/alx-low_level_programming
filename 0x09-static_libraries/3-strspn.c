#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing characters to compare with.
 * Return: Number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (count);
		}
		s++;
	}
	return
		(count);
}
