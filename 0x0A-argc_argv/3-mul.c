#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);
	return (0);
}
