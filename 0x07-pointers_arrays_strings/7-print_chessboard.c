#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: is a pointer to an array of chars
 *
 * Return: Returns the transformed pointer
 *
**/

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
_putchar('\n');
}
}
