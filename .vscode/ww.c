//WAP to find the fibbonacci series upto n terms
#include<stdio.h>
int main()
{
    int n, a=0,b=1,c;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=3; i<=n; i++)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;

    }
    return 0;
}