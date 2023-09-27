#include "main.h"
/**
 * sqrt_help -evaluate from 1 to n
 * @x: numbers
 * @y: numbers from 1 to n iterate
 * * Return: On success 1, error -1
 **/
int sqrt_help(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt_help(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: Number integer
 * Return: On success 1 or -1 in eroor
 **/
int _sqrt_recursion(int n)
{
	return (sqrt_help(n, 1));
}
