#include "main.h"
/**
 * main - Entry point
 * @c: The character to print
 *
 * void print_alphabet(void): the character to be printed
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar (c);
}
_putchar ('\n');
}
