//WAP to count no.of digits in a given no without built-in fn.
#include<stdio.h>
#include<math.h>
int main()
{
    int number,digits=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(number !=0)
    {
        number = number/10;
        digits++;
    }
    printf("Number of digits are %d",digits);
    return 0;
}