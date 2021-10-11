#include <stdio.h>
#include "lists.h"

void print_List(const listint_t *h)
{

const listint_t *tmp = h;

while(tmp != NULL)
{
if(tmp->next == NULL)
{
printf("%i\n", tmp->n);
}
else
{
printf("%i\n", tmp->n);
}
tmp = tmp->next;
}
}

