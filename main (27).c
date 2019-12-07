#include <stdio.h>

int main() //  Print reverse of a number
{
    int i,n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    
}
