#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: parameter
 * @head: parameter two
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *base;

	base = malloc(sizeof(listint_t));
	if (!base)
		return (NULL);
	base->n = n;
	base->next = *head;
	*head = base;
	return (base);
}
