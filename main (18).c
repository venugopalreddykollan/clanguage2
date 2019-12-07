#include <stdio.h>

int main() // print weekday based on day number
{
    int i;
    printf("Enter a number:");
    scanf("\n%d",&i);
    switch(i)
    {
    case 1:printf("\nsunday");break;
    case 2:printf("\nmonday");break;
    case 3:printf("\ntuesday");break;
    case 4:printf("\nwednesday");break;
    case 5:printf("\nthursday");break;
    case 6:printf("\nFriday");break;
    default:printf("\nsaturday");
    }
}
