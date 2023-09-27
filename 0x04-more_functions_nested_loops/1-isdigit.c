#include "main.h"
/**
 *_isdigit - Entry point
 *@c: parameter function provide number
 *Return:1 if parameter is digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
