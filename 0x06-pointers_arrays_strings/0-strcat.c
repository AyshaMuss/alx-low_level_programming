#include "main.h"

int _strlen(char *s);
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
int i = _strlen(dest), j;

for (j = 0; src[j] != '\0'; i++)
{
dest[j + i] = src[j];
}
dest[j + i] = '\0';
return (dest);
}
/**
 * _strlen - this function measures a string length.
 * @s: is a pointer to a char.
 * 
 * Return: Always 0
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + 1) != '\0')
{
i++;
}
return (i);
}
