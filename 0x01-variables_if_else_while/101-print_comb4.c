#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i1, i2, i3;

for (i1 = 0; i1 < 10; i1++)
{
for (i2 = 0; i2 < 10; i2++)
{
for (i3 = 0; i3 < 10; i3++)
{
if (i1 == i2 || i1 == i3 || i2 == i3
|| i1 > i2 || i2 > i3 || i1 > i3)
continue;
else
putchar ((i1 % 10) + '0');
putchar ((i2 % 10) + '0');
putchar ((i3 % 10) + '0');
if (i1 == 7 && i2 == 8 && i3 == 9)
{
}
else
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
