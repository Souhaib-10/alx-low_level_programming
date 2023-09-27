#include "main.h"

/**
 * _isupper - Entry point
 * @c: argument character
 * Description: check character provide is uppercase or not
 * Return: 1 if character is uppercase or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
