#include "main.h"

/**
 * swap_int - checks the code
 *
 * @a: is pointer to an int.
 * @b: is pointer to an int.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
{
int a;
int b;
a = 98;
b = 42;
printf("a is %d, b is %d\n", a, b);
swap(&a, &b);
printf("a is %d, b is %d\n", a, b);
return (0);
}
void swap_int(int *a, int *b) 
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
}
