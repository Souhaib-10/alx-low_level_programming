#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print to 98
 *@n: print from this number
 */

void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	else
	{
		for (i = n ; n > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
