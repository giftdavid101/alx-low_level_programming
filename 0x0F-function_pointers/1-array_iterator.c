#include "function_pointers.h"


/**
 * array_iterator - executes a function
 * @array: array
 * @size: size
 * @action: pointer
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)

while (i < size)

action(array[m]);
i++;

}
