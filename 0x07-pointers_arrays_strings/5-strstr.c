#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 *
 * Return: This function returns a pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle, or a null pointer if the sequence is not present in haystack.
 *
**/

char *_strstr(char *haystack, char *needle)
{
int i;

for (i = 0; haystack[i]; i++)
if (haystack[i] == needle[0])
return (haystack + i);

if (haystack[i] == needle[0])
return (haystack + i);

return (0);
}
