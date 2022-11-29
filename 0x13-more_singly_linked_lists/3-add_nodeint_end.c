#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: parameter
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *base;
listint_t *temp = *head;

base = malloc(sizeof(listint_t));
if (!base)
	return (NULL);
base->n = n;
base->next = NULL;

if (*head == NULL)
{
*head = base;
return (base);
}

while (temp->next)
	temp = temp->next;

temp->next = base;

return (base);

}
