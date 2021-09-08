#include "main.h"

/**
 * _strncat - swaps integers with pointers.
 *
 *@dest: is a pointer to a char.
 *@src: is a pointer to a char.
 *@n: is an int.
 * 
 * Return: Always 0.
 */
char *_strnccpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
