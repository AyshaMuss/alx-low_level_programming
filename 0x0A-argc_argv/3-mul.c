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
int i;
if (argc < 2)
{
printf("Error\n");
return (1);
}
i = (int) *argv[1] * (int) *argv[2];

printf("%d\n", i);

return (0);

}
