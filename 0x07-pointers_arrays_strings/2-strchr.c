#include "main.h"
/**
*_strchr - Returns a pointer s or null
*
*@s:string parameter
*@c:character parameter
*
*Return: returns pointer
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
