//WAP to convert a no of days into years,months and days
#include<stdio.h>
int main()
{
    int days,months,years,total_days;
    printf("Enter total_days");
    scanf("%d",&total_days);
    years = total_days / 365;
    total_days = total_days % 365;
    months = total_days / 30;
    days = total_days % 30;
    printf("No of days is %d years, %d months, %d days",years, months, days);
    return 0;
}