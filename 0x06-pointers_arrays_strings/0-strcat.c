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
*dest = dest_len;
dest_len = strlen(dest);
int i;

for (i = 0; i < src && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
