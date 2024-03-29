#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: parameter
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t index = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
index++;
}
return (index);
}
