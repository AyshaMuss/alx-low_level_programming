#include "main.h"
/**
 * main - Entry point
 * print_alpahbet(void): The character to print
 *
 * Return: Always 0 (Success)
 */
 void print_alphabet(void);
 int main(void)
 {
char c;
for (c = 'a'; c <= 'z'; c++);
{
_putchar (c);
}
_putchar ('\n');
return (0);
}
