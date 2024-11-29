//WAP to check given year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year");
    scanf("%d",&year);
    if(year%100 == 0)
    {
        if(year%400 == 0)
        printf("Input year is leap year");
    else
        printf("Input year is not leap year");
    }
    else if(year%4 == 0)
        printf("Input year is leap year");
    else
        printf("Input year is not leap year");
    return 0;
}