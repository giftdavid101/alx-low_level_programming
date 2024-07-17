#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array of integers
 * @size:  array size
 * @value: searched value
 * Return: the first index of value or -1 if it doesnt exist
 */
int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (!array)
		return (-1);
	for (y = 0; y < size; y++)
	{
		printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		if (array[y] == value)
			return (y);

	}
	return (-1);
}
