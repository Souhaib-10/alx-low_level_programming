#include "main.h"
/**
 * is_lower - check character is lowercase
 * @c: parametre character
 * Return: 1 if lowercase or 0 is not
 */
int _islower(int c)
{
      	if(c >= 'a' && c <= 'z'){
		return (1);
	}else
	{
		return (0);
	}

}
