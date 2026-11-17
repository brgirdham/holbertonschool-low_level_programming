#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Creating an array
 * @width: width of array
 * @height: height of array
 * Return: grid of array, otherwise NULL
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
i = 0;
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
while (i < height)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
j = 0;
while (j < i)
{
free(grid[j]);
j++;
}
free(grid);
return (NULL);
}
j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}
return (grid);
}
