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
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] == s2[i]);
}
else if (s1[i] == s2[i])
{
i++;
}
}
return (0);
}
