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
int i;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
