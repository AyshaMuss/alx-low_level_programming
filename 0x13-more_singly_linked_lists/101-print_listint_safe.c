#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t **newlist;
	size_t i;

newlist = malloc(size * sizeof(listint_t *));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
newlist[i] = list[i];
newlist[i] = new;
free(list);
return (newlist);
}
