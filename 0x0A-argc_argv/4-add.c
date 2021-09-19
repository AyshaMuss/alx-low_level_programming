#include <stdio.h>
#include <stdlib.h>

/**
 * main - cheks the fuction.
 * @argc: couts the arguments passed to the function.
 * @argv: gives the value for the argument passed to the function.
 *
 * Return: Returns always success.
 */

int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc < 1)
return (0);

for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);

return (0);
}
