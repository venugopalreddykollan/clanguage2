#include <stdio.h>

int main() //  Print multiplication table of  a number given by the user of the code
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    i=1;
    while(i<=20)
    {
        printf("\n%d*%d=%d",n,i,i*n);
        i++;
    }
    
}
