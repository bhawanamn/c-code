//WAP to perform the sum of first and last function.
#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    int digits = (int)log10(number)+1;
    int firstdigit = number/pow(10,digits-1);
    int lastdigit = number%10;
    int sum = firstdigit + lastdigit;
    printf("Sum of ist and last digit = %d",sum);
    return 0;
}