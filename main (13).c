#include <stdio.h>

int main() // Leap year
    int n;
    printf("Enter the year:\n");
    scanf("%d",&n);
    if (n%400==0 || (n%100!=0 && n%4==0))
    printf("\n%d is a leap year",n);
    else
    printf("\n%d is not a leap year",n);
}
