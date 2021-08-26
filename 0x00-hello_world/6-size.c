#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int int;
float float;
double double;
char char;
// sizeof evaluates the size of a variable
printf("Size of int: %d bytes\n", sizeof(int));
printf("Size of float: %d bytes\n", sizeof(float));
printf("Size of double: %d bytes\n", sizeof(double));
printf("Size of char: %d byte\n", sizeof(char));
return (0);
}
