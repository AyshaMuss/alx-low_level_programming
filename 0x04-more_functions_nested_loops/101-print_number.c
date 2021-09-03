#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_number(int n, int neg, int x)
{
    int y = x/10;
    int d = x%10;
    if (y) print_int_r(y, neg);
    _putchar('0' + (neg ? -d : d));
}

{
    int neg = x < 0;
    if (neg) putchar('-');
    print_int_r(x, neg);
    _putchar('\n');
}
