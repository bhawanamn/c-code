//WAP to find the factorial of a given number
#include<stdio.h>
int main()
{
    int n, factorial=1;
    printf("Enter n");
    scanf("%d",&n);
    for(int i = n; i>=1; i--)
    {
        factorial = factorial * i;
    }
    printf("Factorial = %d\n",factorial);
    return 0;
}