#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars, and
* initializes it with a specific char argument.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if success.
*/
char *create_array(unsigned int size, char c)
{
	char *cr_array;
	unsigned int number_size;

	if (size == 0)
		return (NULL);
	cr_array = malloc(sizeof(char) * size);
	if (cr_array == 0)
	{
		return (NULL);
	}
	for (number_size = 0; number_size < size; number_size++)
		cr_array[number_size] = c;
	return (cr_array);
}
