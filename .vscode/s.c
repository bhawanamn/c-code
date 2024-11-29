//WAP to perfrom the swapping of two number using third variable
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter x");
    scanf("%d",&x);
    printf("Enter y");
    scanf("%d",&y);
    z = x;
    x = y;
    y = z;
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    return 0;
}