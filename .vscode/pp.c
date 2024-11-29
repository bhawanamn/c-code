//WAP to print all even number from 1 to n
#include<stdio.h>
int main()
{
    int n;
    printf("print the value of all even numbers");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2 ==0)
        printf("%d",i);
    }
    return 0;

}