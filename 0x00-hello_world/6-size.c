#include <stdio.h>
/**
*main - entry point
*Description : print sizo of int and float and char
*Return: always 0
*/
int main(void)
{       printf("size of a char: %lu byte(s)\n", sizeof(char));         
	printf("size of an int: %lu byte(s)\n", sizeof(int));         
	printf("size of a int: %lu byte(s)\n", sizeof(long int));         
	printf("size of a int: %lu byte(s)\n", sizeof(long long int));         
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
