#include "main.h"
/**
 * reverse_array - reverses the content
 * @a: array
 * @n: element array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int reverse, i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		reverse = a[i];
		a[i++] = a[n];
		a[n--] = reverse;
	}
}
