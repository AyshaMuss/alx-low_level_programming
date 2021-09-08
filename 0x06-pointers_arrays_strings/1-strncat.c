#include "main.h"

/**
 * _strncat - This function concatenates two strings.
 *
 *@dest: is a pointer to a char.
 *@src: is a pointer to a char.
 *@n: is an int.
 * 
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = _strlen(dest), j;
for (j = 0; j < n && src[j] != '\0'; j++)
{
    dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
/**
* _strlen - Measures the lenght of a string.
* 
* @s: is a pointer to a char.
*
*  Return: Always 0.
*/
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}  
