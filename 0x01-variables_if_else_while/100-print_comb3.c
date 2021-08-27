#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i1, i2;
for (i = 0; i < 10; i++)
{
for (i2 = 0; i < 10; i2++)
{
putchar((i % 10) + '0');
putchar((i2 % 10) + '0');
if (i1 == 9 && i2 == 9)
continue;
else
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
