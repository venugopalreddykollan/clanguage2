/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()// vowel or consonant
{
    int a;
    char l;
    printf("Enter a letter:");
    scanf("%c",&l);
    a=(int)l;
    if (a==65 || a==69 || a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117 )
    {
        printf("%c is vowel",l);
    }
    else
    {
        printf("%c is consonant",l);
    }
}
