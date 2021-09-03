#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
        if (n < 0)
        {
                my_putchar(0x2D);
                n = -n;
        }

        if (n > 9)
        {
                my_put_nbr(n/10);
        }

        my_putchar((n%10) + '0');

        return 0;
}
