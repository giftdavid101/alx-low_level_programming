#include "search_algos.h"

/**
 * binary_search - search for value in array
 * @array: pointer to first element array
 * @size: no of elements in array
 * @value: value to search for
 * Return:`value`,-1 or NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int min, med, max, y;

	if (!array)
	{
		return (-1);
	}

	min = 0;
	max = size - 1;

	while (min <= max)
	{
		med = (min + max) / 2;
		for (y = min; y <= max; y++)
			printf("%i%s", array[y], y == max ? "\n" : ", ");

		if (array[med] < value)
			min = med + 1;
		else if (array[med] > value)
			max = med - 1;
		else
			return (med);
	}

	return (-1);
}
