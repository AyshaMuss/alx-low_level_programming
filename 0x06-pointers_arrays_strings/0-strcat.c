#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strcat - This function concatenates two strings.
 * 
 *@dest: is a pointer to a char.
 *@src: is a pointer to a char.
 * 
 *Return: Always 0.
 */
 char *_strcat(char *dest, char *src)
{
size_t n;
size_t dest_len = strlen(dest);
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
