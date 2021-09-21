#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array for the function.
 * @size: is the size of unsigned int array
 * @c: is a character for char.
 *
 * Return: Returns the array.
**/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar = malloc(size * sizeof(c));

if (size == 0)
{
return (Null);
}
if (ar != Null)
{
for (i = 0; i < size; i++)
{
ar[i] = c;
return (ar);
}
}
else
{
return (Null);
}
}
