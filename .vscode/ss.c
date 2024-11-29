//WAP to print the sum of series i.e sum=1+2+3+4+.....+N
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        sum += i;
    }
        printf("The sum of the series is : %d\n", sum);
    return 0;
}