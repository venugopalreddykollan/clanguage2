#include <stdio.h>

int main() // Greater in two numbers
{
    int a,b;
    printf("Enter two values\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    printf("\n%d is greater",a);
    else if(b>a)
    printf("\n%d is greater",b);
    else
    printf("\n Both are equal");
}
