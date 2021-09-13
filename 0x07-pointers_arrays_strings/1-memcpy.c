#include "main.h"

/**
 * _memcpy - This function fills memmory with a constant byte
 * 
 * @dest: is a pointer to a char
 * @src: is a pointer to a char
 * @n: is an unsigned int
 * 
 * Return: Return the transformed pointer
 * 
**/

char *_memset(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i =0; i < n; i++)
dest[i] = src[i];

return (dest);
}
