#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int digits = (int)log10(number)+1;
    printf("Number of digits are %d",digits);
    return 0;
}