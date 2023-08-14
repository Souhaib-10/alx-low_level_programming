#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphapet in lowercase
 * Return: always retun 0
 */
int main(void)
{
	char first;

	first = "a";
	while (first <= "z")
	{
		putchar(first);
		first++;
	}
	putchar("\0");
	return (0);
}
