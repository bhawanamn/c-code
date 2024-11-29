//WAP to  find the average of five number
#include<stdio.h>
int main()
{
    int a,b,c,d,e,average;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("Enter c");
    scanf("%d",&c);
    printf("Enter d");
    scanf("%d",&d);
    printf("Enter e");
    scanf("%d",&e);
    average = (a + b + c + d + e)/5;
    printf("%d",average);
    return 0;

}