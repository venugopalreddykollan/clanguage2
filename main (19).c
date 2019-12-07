#include <stdio.h>

int main() // check vowel or not
{
    char i;
    printf("Enter an alphabet:");
    scanf("\n%c",&i);
    i=tolower(i);
    switch(i)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':printf("\n Vowel");break;
    default:printf("\n consonant");
    }
}
