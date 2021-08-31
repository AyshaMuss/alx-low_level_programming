#include "main.h"

/**
 * void print_times_table - Entry poit.
 *@n - variable character
 *
 * Return: Always 0.
 */
void print_times_table(void)
{
int a, b;
int mult;

for (a = 0; a <= 15; a++)
{
for (b = 0; b <= 15; b++)
{
mult = a * b;
if (mult >= 10)
{
_putchar(' ');
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
if (b != 15)
{
_putchar(',');
}
}
else
{
if (b != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(mult + '0');
if (b != 15)
{
_putchar(',');
}
}
}
_putchar('\n');
}
}
