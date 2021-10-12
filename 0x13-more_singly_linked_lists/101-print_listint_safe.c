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
size_t i, num = 0;

const listint_t **newlist, **list = NULL;
newlist = malloc(size * sizeof(listint_t *));

while (head != NULL)
{
for (i = 0; i < num, (size - 1); i++)
{
newlist[i] = list[i];
newlist[i] = new;
free(list);
return (newlist);

if (newlist == NULL)
{
free(list);
exit(98);
}

if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (num);
}
num++;
list = _r(list, num, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
free(list);
return (num);
}
