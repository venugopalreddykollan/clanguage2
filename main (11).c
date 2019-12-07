/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() // Check whether the given character is lowercase ,uppercase or number
{
    int a;
    char l;
    printf("Enter a letter:");
    scanf("%c",&l);
    a=(int)l;
    if (a>=65 && a<=90)
    {
        printf("\n%c is uppercase",l);
    }
    else if(a>=97 && a<=122)
    {
        printf("\n%c is lowercase",l);
    }
    else if(a>=48 && a<=57)
    {
        printf("\n%c is number",l);
    }
}
