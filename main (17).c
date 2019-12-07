#include <stdio.h>

int main() // digits of a number
{
    int i;
    printf("Enter a number:\n");
    scanf("\n%d",&i);
    if(i>=0 && i<=9)
    printf("\n%d is a single digit number",i);
    else if (i<100)
    printf("\n%d is a double digit number",i);
    else if(i<1000)
    printf("\n%d is a triple digit number",i);
    else if(i<10000)
    printf("\n%d is four digit number",i);
}
