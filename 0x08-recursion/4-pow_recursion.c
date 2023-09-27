#include "main.h"

/**
 * _pow_recursion -  value of x raised to the power of y
 * @x: base
 * @y: exposant
 * Return: int x raised to the power of y
 * or -1 and 1 or x
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
