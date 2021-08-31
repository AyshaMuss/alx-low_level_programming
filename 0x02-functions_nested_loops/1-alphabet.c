#include "main.h"
/**
 * main - Entry point
 * print_alphabet - The prototype containing the character to print
 *
 * void print_alphabet(void): the character to be printed
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
print_alphabet (c);
_putchar (c)
}
_putchar ('\n');
}
