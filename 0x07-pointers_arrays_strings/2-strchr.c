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
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
} 
