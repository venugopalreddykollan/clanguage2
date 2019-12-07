#include <stdio.h>

int main() //  Print even from 1 to 20
{
    int i;
    i=1;
    while(i<=20)
    {
        if(i%2==0)
        {
        printf("%d,",i);
        }
        i++;
    }
    
}
