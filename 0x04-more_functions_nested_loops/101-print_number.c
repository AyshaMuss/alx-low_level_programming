#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{

   if (n < 0)
   {
       _putchar('-');
       n = -n;
   }

   if (n == 0)
      _putchar('0');
{
   if (n/10)
      printnumber(n/10);
}
   _putchar(n%10 + '0');
}

int main(int argc, char** argv)
{
   int n = atoi(argv[1]);
   printnumber(n);
   _putchar('\n');
}
