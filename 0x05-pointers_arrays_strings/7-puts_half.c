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
int i, j;
i = *str;
_putchar(*(str / 2));
_putchar('\n');
}
