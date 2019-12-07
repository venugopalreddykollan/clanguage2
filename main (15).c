#include <stdio.h>

int main() // Greater in three numbers
{
    int a,b,c;
    printf("Enter three values\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c)
    printf("\nAll are Equal");
    else if(a>b && a>c)
    printf("\n%d is greater",a);
    else if (b>c && b>a)
    printf("\n%d is greater",b);
    else
    printf("\n%d is greater",c);
}
