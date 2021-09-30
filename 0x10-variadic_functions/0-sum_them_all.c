#include "variadic_functions.h"

/**
 * sum_them_all - is function which sums given number of arguments
 * @n: is unsigned const int
 *
 * Return: returns the sum
**/

int sum_them_all(const unsigned int n, ...)
{

va_list ap;
unsigned int j;
unsigned int sum = 0;

va_start(ap, n);
for (j = 0; j < n; j++)
{
sum += va_arg(ap, int);
}
va_end(ap);

return (sum);
}
