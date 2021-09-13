#include "main.h"

/**
 * _strstr - funtion locates a substring.
 *
 * @haystack:  This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 *
 * Return: Returns the transformed pointer.
 *
**/

char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;
int here = 0;

while
(
    if (neele[i] == haystack[j])
    {
        if (here == 0)
        here = j;
        i++;
        j++;
        if (i >= strlen(needle))
        {
        return (here);
    }
    if (j >= strlen(haystack))
    {
        return (-1);
    }
)
else
{
    j++, i = 0; here = 0;
}
}
}
