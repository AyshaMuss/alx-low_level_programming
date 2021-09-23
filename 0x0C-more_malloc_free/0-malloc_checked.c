#include "main.h"
#include <stdlib.h>

/**
 * malloc_cheked - Allocates memory
 * @b: size used to initialize unsigned int
 *
 * Return: always success.
**/

void *malloc_checked(unsigned int b)
{
void *array = malloc(b);

if (array == NULL)
{
exit(98);
}
return (array);
}
