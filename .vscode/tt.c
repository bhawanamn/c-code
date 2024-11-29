//WAP to print the table of given number
#include<stdio.h>
int main()
{
    int n, number;
    printf("Enter the number");
    scanf("%d",&number);
    printf("Multiplication table of %d\n", number);
    for(int i = 1; i<= n; i++)
    {
        printf("%d %d = %d\n", number, i, number * i);
    }
}