#include "main.h"
/**
 * main - Entry point
 * print_alphabet - The prototype containing the character to print
 *
 * print_alphabet: the character to be printed
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
