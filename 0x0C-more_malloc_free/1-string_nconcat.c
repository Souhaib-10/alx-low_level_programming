#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, lconcat, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[lconcat] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n > len2)
		n = len2;
	lconcat = len1 + n;
	concat = malloc(lconcat + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < lconcat; i++)
		if (i < len1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - len1];
	concat[i] = '\0';
	return (concat); }
