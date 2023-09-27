#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (included) in the array.
 * @max: The maximum value (included) in the array.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 **/
int *array_range(int min, int max)
{
	int *table;
	int i;

	if (min > max)
		return (NULL);

	table = malloc(sizeof(*table) * ((max - min) + 1));

	if (table == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		table[i] = min;

	return (table);
}
