#include "main.h"
#include <math.h>

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
 float next = (prev + num / prev) / 2;
    if (fabs(next - prev) < FLT_EPSILON * next)
        return next;
    return (_sqrt_recursion(num, next));
}
