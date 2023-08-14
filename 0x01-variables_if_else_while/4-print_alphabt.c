#include <stdio.h>
/**
* main - Entry point
* Description: print all alphapet in lowercase except q and e
* Return: always retun 0
*/
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'q' || letter != 'e')
		{
		putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
