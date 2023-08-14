#include <stdio.h>
/**
*main-Entry point
*Description: print all alphabet in lowercase and appercase
*Return: Always 0 (Success)
*/
int main(void)
{
	char letter_lowercase = 'a';
	char letter_appercase = 'A';

	while (letter_lowercase <= 'z')
	{
		putchar(letter_lowercase);
		letter_lowercase++;
	}
	putchar('\n');
	while (letter_appercase <= 'Z')
	{
		putchar(letter_appercase);
		letter_appercase++;
	}
	return (0);
}
