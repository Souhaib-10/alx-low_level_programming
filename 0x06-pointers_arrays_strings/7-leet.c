#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: string giving
 * Return: pointeur result
 */
char *leet(char *s)
{
	int i, j;

	char dict_leet[] = "aAeEoOtTlL";
	char replace_num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; dict_leet[j] != '\0'; j++)
		{
			if (s[i] == dict_leet[j])
			{
				s[i] = replace_num[j];
				break;
			}
		}
	}
	return (s);
}

