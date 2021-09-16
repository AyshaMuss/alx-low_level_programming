#include "main.h"
#include <string.h>

/**
 *
 * wildcmp - if a fuction that compares two strings.
 *
 * @s1: is a pointer to char.
 * @s2: is a pointer to char.
 *
 * Return: Returns the transformed pointer.
**/

int wildcmp(char *s1, char *s2)
{
if (*s1 < *s2)
{
return -1;
}
else if (*s1 > *s2)
{
return +1;
}
else if (*s1 == '\0')
{
return 0;
}
else
return wildcmp(s1 + 1, s2 + 1);
}
