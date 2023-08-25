#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @*s1: first String
 * @*s2: second String
 * Return: number to compare
 */
int _strcmp(char *s1, char *s2)
{
	int i, count;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	count = s1[i] - s2[i];
	return (count);
}
