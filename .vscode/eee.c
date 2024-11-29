//WAP to swap 1st and last digit of a given number.
#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    int digits = (int)log10(number) + 1;
    int firstdigit = number / pow(10, digits-1);
    int lastdigit = number % 10;
    int middlepart = (number % (int)pow(10, digits - 1)) / 10;
    int swappednumber = lastdigit*pow(10, digits-1) + middlepart * 10 + firstdigit;
    printf("After swapping number is %d",swappednumber);
    return 0;
}