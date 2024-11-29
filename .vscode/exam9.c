//WAP to  convert a time given in milliseconds into hours,minutes and seconds
#include<stdio.h>
int main()
{
    int milliseconds,hours,minutes,seconds;
    printf("Enter milliseconds");
    scanf("%d",&milliseconds);
    seconds = milliseconds / 1000;
    milliseconds = milliseconds % 1000;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes  = seconds / 60;
    seconds = seconds % 60;
    printf("Time is %d hours, %dminutes, %d seconds, %d milliseconds",hours, minutes, seconds, milliseconds);
    return 0;
}
