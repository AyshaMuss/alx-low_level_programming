#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{ 
    // If number is smaller than 0, put a - sign 
    // and change number to positive 
    if (n < 0)
    { 
      putchar('-'); 
      n = -n; 
    }
    // If number is 0
    if (n == 0)
    _putchar('0');
  
    // Remove the last digit and recur 
    if (n/10) 
   print(n/10); 
  
    // Print the last digit 
   _putchar(n%10 + '0'); 
} 
  
// Driver program to test abvoe function 
int main() 
{ 
   int n = 12045; 
   print(n); 
   return 0; 
}
