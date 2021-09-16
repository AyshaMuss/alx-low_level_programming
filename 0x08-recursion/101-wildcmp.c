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
while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
{
s1++;
s2++;
}

if(*s1 == *s2)
{
return 0;
}

else
{
return *s1 - *s2;
}
}
