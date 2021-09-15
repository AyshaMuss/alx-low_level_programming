#include "main.h"

/**
 * _sprt_recursion - is a function that returns the natural square root of a number.
 *
 * @n: is an int to the function.
 *
 * Return: Return the transformed pointer
 *
**/

int _sqrt_recursion(int n)
{
int i, result = 1;
if (n == 0 || n == 1)
{
return _sqrt_recursion(n);
}
else if (result <= n)
{
i++;
result = i * i;
}

return (i - 1);
}
