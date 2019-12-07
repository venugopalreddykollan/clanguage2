#include <stdio.h>

int main() // check large among three value
{
    int a,b,c;
    printf("Enter three values");
    scanf("\n%d%d%d",&a,&b,&c);
    printf(a==b && b==c?"all are equal":a>b && a>c?"a is big":b>c?"b is big":"c is big");
}
