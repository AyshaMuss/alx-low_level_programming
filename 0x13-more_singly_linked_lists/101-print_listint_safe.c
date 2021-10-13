#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: char separating numbers
 * @n: number of iterations
 * return: Returns an int
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, val;
va_list ls;

va_start(ls, n);

for (i = 0; i < n; i++)
{
val = va_arg(ls, int);
print_numbers("%d", val);
if (separator)
{
continue;
if (i != (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(ls);
return;
}

/**
 *print_listint_safe - prints a listint list
 *@head:pointer to head
 *Return:number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t **list = NULL;
size_t i, num = 0;

if (!head)
exit(98);

while (head)
{
for (i = 0; i < num; i++)
{

if (head == list[i])
{
printf("[%p] %d", (void *)head, head->n)
;

free(list);
return (num);
}
}
num++;
printf("[%p] %d", (void *)head, head->n);
head = head->next;
}

free(list);
return (num);
}
