#include <stdio.h>

int main() //  Check whether the number is palindrome or not
{
    int n,r,rev=0,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
       rev=(rev*10)+r;
        n=n/10;
    }
    if (rev==a)
    printf("%d is a palindrome",a);
    else
    printf("%d is  not palindrome",a);
    
}
