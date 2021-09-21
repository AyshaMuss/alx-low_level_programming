#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - swaps integers with pointers
 * @s: is a pointer to a char.
 *
 * Return: always success.
**/
int _strlen(char *s)
{
int i = 0;

while (*(s + 1) != '\0')
{
i++;
}
return (i);
}
/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 *
 * Return: Return success.
**/

char *_strdup(char *str)
{
int i;
int size = _strlen(str) + 1;
char *ar;
str = NULL;

if (str == NULL)
{
return (NULL);
}
ar = malloc(size * sizeof(char));

if (ar == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
ar[i] = str[i];
ar[i + 1] = '\0';
}
return (ar);
}
}
