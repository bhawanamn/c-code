// swapping of two numbers without using third variable
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x");
    scanf("%d",&x);
    printf("Enter y");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}