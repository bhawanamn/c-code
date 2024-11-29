//WAP to find only odd digits of a number.
#include<stdio.h>
int main()
{
    int number, sum=0, remainder,number1=0;
    printf("Enter number");
    scanf("%d",&number);
    int i=1;
    while(number != 0)
    {
        remainder = number%10;
        if(remainder%2 != 0)
        {
            number1 = number1 + remainder*i;
            i=1*10;
        }
        number = number/10;
    }
    printf("new number = %d",number1);
    return 0;
}