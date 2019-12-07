#include <stdio.h>

int main() //  Print numbers from 1 to n
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d,",n);
        n--;
    }
    
}
