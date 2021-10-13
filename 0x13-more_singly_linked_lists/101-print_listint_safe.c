#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints the elements in linked list
 * @h: head of listint_t type
 *
 * Return: returns number of nodes and Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *h)
{

if (!h)
{
exit(98);
return;
}
const listint_t temp = h;

while(temp != NULL)
{
print("%d\N", temp->n);
temp = temp->next;
}
}
