#include "main.h"

/**
 * check_prime - helper function to check if n is prime
 * @n: the number to check
 * @divisor: the current divisor being checked
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{

	if (n < 2)
		return (0);

	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor - 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 **/
int is_prime_number(int n)
{
	return (check_prime(n, n / 2));
}
