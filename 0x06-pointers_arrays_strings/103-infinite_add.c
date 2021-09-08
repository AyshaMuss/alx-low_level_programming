#include "main.h"
/**
 * print_number - prints an integer.
 * 
 * @n1: is a mumber.
 * @n2: is a number.
 * size_r is the buffer size.
 * @r: is the buffer that the function will use to store the result.
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
{
unsigned int num = 0;
int i = 0;
int carry = 0;
long int strlen = 0;
long int rsiz = size_r;

for (; *(n1 + 1) && *(n2 + 1); i++)
{
n1++;
n2++;
}
strlen = i;
while (size_r)
{
r++;
size_r--;
}
for (; i; i--)
{
num = n2[i] - '0' + n1[i] - '0' % 10 + carry;
carry = 0;
if (n2[i] - '0' + n1[i] - '0' > 9)
carry = 1;
}
if (strlen > rsiz)
return (0);
else if (strlen == rsiz && carry == 1)
return (0);
else
{
for (; rsiz; rsiz--)
{
r[rsiz] = num % 10;
num -= num % 10;
}
}
return (r);
}
