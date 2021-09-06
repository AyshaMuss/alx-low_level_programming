#include "main.h"

/**
 * puts_half - Swaps integers wih pointers.
 *
 * @str: is a pointer to a char
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
int c = 0;

while (*(str + c) / 2 != '\0')
c++;
return (c);
}
