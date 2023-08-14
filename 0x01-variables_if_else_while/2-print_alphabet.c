#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphapet in lowercase
 * Return: always retun 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (first <= 'z')
	{
		putchar(letter);
		first++;
	}
	putchar('\0');
	return (0);
}
