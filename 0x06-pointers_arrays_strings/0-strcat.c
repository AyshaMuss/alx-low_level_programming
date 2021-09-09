#include "main.h"

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
dest_len = strlen(dest);
 

for (dest = 0; dest < src && src[dest] != '\0'; dest++)
dest[dest_len + dest] = src[dest];
dest[dest_len + dest] = '\0';
return (dest);
}
