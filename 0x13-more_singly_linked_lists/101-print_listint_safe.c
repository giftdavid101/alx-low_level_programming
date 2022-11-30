#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *base, *comp;
size_t count_base = 0, count_comp = 0;

base = head;
comp = head;
while (base != NULL)
{
while (count_base > count_comp)
{
if (base == comp)
{
printf("-> [%p] %d\n", (void *)base, base->n);
return (count_base);
}
count_comp++;
comp = comp->next;
}
comp = head;
count_comp = 0;
printf("[%p] %d\n", (void *)base, base->n);
count_base++;
base = base->next;
}
return (count_base);

}
