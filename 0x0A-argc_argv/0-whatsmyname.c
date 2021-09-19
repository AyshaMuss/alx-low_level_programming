#include <stdio.h>

/**
 * main - is a function that prints the name.
 *@argc: is an argument counter for char.
 *@argv: is an agument value for char.
 *Return: Returns always success.
**/

int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc);
for (i = 0; i < argc - 1; i++)
{
printf("%S", argv[i]);
}
	return (0);
}
