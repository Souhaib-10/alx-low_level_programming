#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print to 98
 *@n: print from this number
 */

void print_to_98(int n)
{
	for (int i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	printf("\n");
}
