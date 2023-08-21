#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: characters to reverse
 */
void rev_string(char *s)
{
	int length;
	int i, j = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	char reverse_char[length];

	for (i = length - 1; i >= 0; i--)
	{
		reverse_char[j] = s[i];
		j++;
	}
	for (i = 0; i < length; i++)
	{
		s[i] = reverse_char[i];
	}
}
