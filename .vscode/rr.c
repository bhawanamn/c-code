//WAP to print the series 1 4 9 16 25.....N
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++)
    {
        printf("%d ", i * i);
    }
    return 0;
}