#include <stdlib.h>
/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 * Return: A pointer to the newly allocated duplicated string, or NULL if
 * memory allocation fails or str is NULL.
 **/
char *_strdup(char *str)
{
	char *cp;
	int i;
	int length;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	cp = malloc(sizeof(char) * (length + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cp[i] = str[i];
	}

	cpy[length] = '\0';

	return (cp);

}
