#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 * Return: void
 */


void free_grid(int **grid, int height)
{
int index;

for (index = 0; index < height; index++)
free(grid[index]);

if (grid == NULL || height == 0)
return;

free(grid);
}
