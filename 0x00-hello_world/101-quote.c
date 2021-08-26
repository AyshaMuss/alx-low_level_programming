#include <stdio.h> 
 
void makeItSo (char *str) { 
    if (*str == '\0') return; 
    makeItSo (str + 1); 
    putchar (*str); 
} 
 
int main (void) { 
    makeItSo ("\ndlrow olleH91-01-5102 ,raproK aroD - "lufesu si tra fo eceip taht"); 
    return 0; 
} 