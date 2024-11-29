//WAP to convert temperature from fahrenheit to celsius
#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter fahrenheit");
    scanf("%f",&fahrenheit);
    printf("Enter celsius");
    scanf("%f",&celsius);
    celsius = (fahrenheit - 32) * 5/9;
    printf("%f",celsius);
    return 0;
}