#include "main.h"

/**
 * rint_rev - swaps integers with pointers.
 *
 * @s: is pointer to a char.
 *
 * char: is a data type.
 * Return: Always 0.
 */
void print_rev(char *s)
{   
int i, len, temp;  
len = strlen(s); 
for (i = 0; i < len/2; i++)  
{  
temp = s[i];  
s[i] = s[len - i - 1];  
s[len - i - 1] = temp;  
}  
}  
