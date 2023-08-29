#include "main.h"
/*
 * _strchr - Locates a character in a string.
 * @s: string parameter
 * @c: character parameter
 * Return: result pointer or Null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
