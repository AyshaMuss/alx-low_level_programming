#include "main.h"

/**
 * _pow_recursion - is a function that returns the value of x raised to the power of y.
 *
 * @x: is an int to power recursive function.
 * @y: is an int to power recursive function.
 *
 * Return: Return the transformed pointer
 *
**/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
retun (-1);
}
else
{
return (x * power (x, y-1));
}
return (0);
}
