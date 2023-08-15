#include <stdio.h>
/**
* main - Entry point
* Description: print all alphapet in lowercase
* Return: always retun 0
*/
int main(void)
{
	char letter;

	letter = 'z';
	while (letter <= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
