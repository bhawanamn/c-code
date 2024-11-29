//WAP to print the factorial of given number
#include<stdio.h>
int main()
{
    int n, factorial=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i = n; i>=1; i--)
    {
        factorial = factorial * i;
    }
    printf("factorial = %d\n", factorial);
}
    