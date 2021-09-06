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
    // declare variable  
    int i, len, temp;  
    len = strlen(s); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = s[i];  
        s[i] = s[len - i - 1];  
        s[len - i - 1] = temp;  
    }  
}  
