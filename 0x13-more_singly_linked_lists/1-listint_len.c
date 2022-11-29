#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: parameter
 * Return: the number of elements which is an integer
 */

size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h)
	{
		h = h->next;
		index++;
	}
	return (index);
}
