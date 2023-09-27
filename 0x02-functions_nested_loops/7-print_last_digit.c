#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: value num_last
 * @n: parameter function
 *
 */
int print_last_digit(int n)
{
	int num_last;

	if (n < 0)
	n = -n;
	num_last = n % 10;
	if (num_last < 0)
	num_last = -num_last;
	_putchar(num_last + '0');
	return (num_last); }
