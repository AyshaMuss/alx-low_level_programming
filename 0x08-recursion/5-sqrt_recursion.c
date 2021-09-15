#include "main.h"

/**
 * _sprt_recursion - is a function that returns the natural square root of a number.
 *
 * @n: is an int to the function.
 * @p: is an int to the function
 * @m: is an int to the function
 *
 * Return: Return the transformed pointer
 *
**/

int _sqrt_recursion(int n)
{
int p;
int m = ((p + n) /p)/2;
    if (fabs(m - p) < FLT_EPSILON * m)
        return (m);
    return _sqrt_recursion(n, m);
}
