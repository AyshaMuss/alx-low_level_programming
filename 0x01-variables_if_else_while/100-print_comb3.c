#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i1, i2;
for (i1 = 0; i1 < 8; i1++)
{
for (i2 = 1; i2 < 10; i2++)
{
putchar((i1 % 10) + '1');
putchar((i2 % 10) + '0');
if (i1 == 9 && i2 == 9)
continue;
else
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
