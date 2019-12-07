#include <stdio.h>

int main() //  Print even numbers from n to 1
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==1)
    n=n-1;
    while(n>=2)
    {
        printf("\n%d",n);
        n-=2;
    }
    
}
