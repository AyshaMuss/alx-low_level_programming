!<arch>
0-isupper.c/    0           0     0     644     228       `
#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: c is a variable name
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 97 && c <= 122)
return (0);
if (c >= 65 && c <= 90)
return (1);

return (0);
}
0-memset.c/     0           0     0     644     327       `
#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 *
 * @s: is pointer to a char
 * @b: is a char
 * @n: is an unsigned int
 *
 * Return: Returns the transformed pointer
 *
**/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}

0-strcat.c/     0           0     0     644     575       `
#include "main.h"

int _strlen(char *s);

/**
 * _strcat - This function concatenates two strings.
 *
 * @dest: is a pointer to a char.
 * @src: is a pointer to a char.
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int i = _strlen(dest), j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

return (dest);
}

/**
 * _strlen - this function measures a string leght.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0
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

100-atoi.c/     0           0     0     644     667       `
#include "main.h"
#include <stdio.h>
/**
 * _atoi - print the integer of a char.
 * @s:  tested char
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int counter, i, j, k, length, num, l;
	int aux;

	aux = 1;
	counter = 0;
	num = 0;

	while (*(s + counter) != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		break;
	}
	for (j = i; j < counter; j++)
	{
		if (!(*(s + j) <= '9' && *(s + j) >= '0'))
			break;
	}

	for (k = 0; k < i; k++)
	{
		if (*(s + k) == '-')
			aux = -aux;
	}
	length = j - i;
	l = i;
		while (length >= 1)
	{
		num = num * 10 + (*(s + l) - '0');
		l++;
		length--;
	}
	return (num * aux);
}

1-isdigit.c/    0           0     0     644     208       `
#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: c is a variable name
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);

return (0);
}
1-memcpy.c/     0           0     0     644     364       `
#include "main.h"

/**
 * _memcpy - This function fills memory with a constant byte
 *
 * @dest: is a pointer to a char
 * @src: is a pointer to a char
 * @n: is an unsigned int
 *
 * Return: Returns the transformed pointer
 *
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
1-strncat.c/    0           0     0     644     601       `
#include "main.h"

int _strlen(char *s);

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: is a pointer to a string.
 *
 * @src: is a pointre to a string.
 *
 * @n: is an int
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
 *_strlen - Measures the lenght of a string.
 *
 * @s: is a pointer to a char.
 *
 * Return: Always 0.
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

2-strchr.c/     0           0     0     644     311       `
#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: is a pointer to a char
 * @c: is a pointer to a char
 *
 * Return: Return the transformed pointer
 *
**/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);

return (0);
}

2-strlen.c/     0           0     0     644     229       `
#include "main.h"

/**
 * _strlen - swaps integers with pointers.
 *
 * @s: is pointer to an char.
 * char: is a data type.
 * Return: Always 0.
 */
int _strlen(char *s)
{
int c = 0;

while (*(s + c) != '\0')
c++;

return (c);
}

2-strncpy.c/    0           0     0     644     382       `
#include "main.h"

/**
 * _strncpy - Swaps integers wih pointers.
 *
 * @dest: is a pointer to a char.
 *
 * @src: is a pointer to a char.
 *
 * @n: is a pointer to an int.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = i; i < n; i++)
		dest[i] = '\0';

return (dest);
}
3-islower.c/    0           0     0     644     182       `
#include "main.h"
/**
 * _islower -Entry point
 *@c: The character to print
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
3-puts.c/       0           0     0     644     263       `
#include "main.h"

/**
 * _puts - swaps integers with pointers.
 *
 * @str: is pointer to a char.
 *
 * char: is a data type.
 * Return: Always 0.
 */
void _puts(char *str)
{
int c = 0;

while (*(str + c) != '\0')
{
_putchar(*(str + c));
c++;
}
_putchar('\n');
}

3-strcmp.c/     0           0     0     644     364       `
#include "main.h"

/**
 * _strcmp - Comapres two strings.
 *
 * @s1: is a pointer to a char.
 *
 * @s2: is a pointer to a char.
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
			return (s1[i] - s2[i]);
		}
		else if (s1[i] == s2[i])
		{
			i++;
		}
	}
return (0);
}
3-strspn.c/     0           0     0     644     442       `
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: is a pointer to a char
 * @accept: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

unsigned int _strspn(char *s, char *accept)
{
int i, j, flag;
unsigned int cnt = 0;
for (i = 0; s[i] != 0; i++)
{
flag = 0;
for (j = 0; accept[j] != 0; j++)
{
if (s[i] == accept[j])
{
flag = 1;
cnt++;
}
}
if (flag == 0)
break;
}
return (cnt);
}
4-isalpha.c/    0           0     0     644     208       `
#include "main.h"
/**
 * _isalpha -Entry point
 *@c: The character to print
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
4-strpbrk.c/    0           0     0     644     382       `
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: is a pointer to a char
 * @accept: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

char *_strpbrk(char *s, char *accept)
{
int i, j;

	for (i = 0; s[i] != 0; i++)
		for (j = 0; accept[j] != 0; j++)
			if (s[i] == accept[j])
				return ((s + i));

return (0);
}
5-strstr.c/     0           0     0     644     461       `
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
int i;

for (i = 0; haystack[i]; i++)
if (haystack[i] == needle[0])
return (haystack + i);

if (haystack[i] == needle[0])
return (haystack + i);

return (0);
}

6-abs.c/        0           0     0     644     171       `
#include "main.h"
/**
 * _abs - Entry point
 *
 * @r: r is variable name
 *
 * Return: Always 0 (Success)
 */
int _abs(int r)
{
if (r < 0)
return (-r);
else
return (r);
}

9-strcpy.c/     0           0     0     644     415       `
#include "main.h"

/**
 * _strcpy - Swaps integers wih pointers.
 *
 * @dest: is a pointer to a char
 *
 * @src: is a pointer to a char
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
char buff[1000];
int i = 0, j, pos = 0;

while (*(src + i) != '\0')
{
	buff[i] = *(src + i);
	i++;
}

for (j = 0; *(src + j) != '\0' ; j++)
{
	*(dest + pos) = buff[j];
	pos++;
}
dest[j] = '\0';
return (dest);
}

main.c/         0           0     0     644     148       `
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
_putchar.c/     0           0     0     644     247       `
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

