#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: characters to reverse
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++
	}
	for (i = 0; i >= length / 2; i++)
	{
		char reverse_char = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = reverse_char
	}
}
