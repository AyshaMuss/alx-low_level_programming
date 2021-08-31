#include <limits.h>
#include "main.h"

/**
 * print_sign - -Entry point
 *@n: The character to print
 *
 * Return: Always 0.
 */
int print_sign(int r)
{
r = print_sign(98);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0xff);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
r = print_sign(-1);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(99);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
r = print_sign(INT_MAX);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
r = print_sign(INT_MIN);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
r = print_sign(-4);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
return (0);
}
