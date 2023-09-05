#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: A pointer to the newly allocated 2D array,
 * or NULL on failure or if width/height are 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);


	if (grid == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
