//WAP to perform the sum of all even digits of a given number.
#include<stdio.h>
int main()
{
    int number,sum=0,remainder;
    printf("Enter number");
    scanf("%d",&number);
    while(number != 0)
    {
        remainder = number%10;
        if(remainder%2==0)
        sum += remainder;
        number = number/10;
    }
    printf("sum of all even digit of a number = %d",sum);
    return 0;
}
