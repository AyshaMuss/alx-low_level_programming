#include "main.h"

/**
 * _puts - swaps integers with pointers.
 *
 * @str: is pointer to a char.
 *
 * char: is a data type.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int c, d;

while (*(s + c) != '\0')
{
{
c++;
}
for (d = (c - 1); d >= 0; d--)
{
_putchar(*(s + d));
}
_putchar('\n');
}
