#include<stdio.h>
#include <stdlib.h>

/**
 * main - prints the function.
 * @argc: counts agruments passed to the function for int.
 * @argv: gives the value passed to the function for char.
 *
 * Return: Returns always success.
**/

int main(int argc, char *argv[])
{

if (argc != 3)
{
printf("%s\n", "Error");
exit(98);
}

printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
