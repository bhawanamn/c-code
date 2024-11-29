//WAP to read a number from the user and perform the sum of their digits
#include<stdio.h>
int main()
{
    int number,sum=0,remainder;
    printf("Enter number");
    scanf("%d",&number);
    while(number != 0)
    {
        remainder = number%10;
        sum += remainder;
        number = number/10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}