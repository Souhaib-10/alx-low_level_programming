#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * Return: pointeur result
 * @s: pointeur string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		    || s[i] == ',' || s[i] == ';' || s[i] == '.'
		    || s[i] == '.' || s[i] == '!' || s[i] == '?'
		    || s[i] == '"' || s[i] == '(' || s[i] == ')'
		    || s[i] == '{' || s[i] == '}')
		{
			if (s[ + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
