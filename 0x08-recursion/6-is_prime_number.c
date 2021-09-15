#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: is a pointer to an int.
 *
 * Return: Returns the result.
 *
**/

int is_prime_number(int n)
{
int num, p = 0;
for (n = 1; n <= num; n++)
{
if (num % n == 0)
{
p++;
}
}
if (p == 2)
{
return (num);
}
else
{
return (0);
}
}
