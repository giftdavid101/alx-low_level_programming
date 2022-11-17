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
i = 0;

if (!array || !action)
return;

while (i < size)

action(array[i]);
i++;

}
