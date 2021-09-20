#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the function.
 * @argc: counts the arguments of the function.
 * @argv: gives the value of the arguments passed to the function.
 *
 * Return: Return always success.
**/

int main(int argc, char *argv[])
{
int i, j, k, l, m, sum = 0;
int cents = atoi(argv[1]);
if (argc == 2)
{
if (cents < 0)
{
printf("0\n");
}
else
{
if (cents >= 25)
{
while (cents >= 25)
{
cents -= 25;
i++;
}
}
if (cents >= 1)
{
while (cents >= 1)
{
cents -= 1;
j++;
}
}
sum = i + j;
printf("%d\n", sum);
}
}
else
{
printf("Error\n");
return (1);
}
return (sum);
}

