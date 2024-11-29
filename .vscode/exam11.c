//WAP to find the greatest number among two.
#include<stdio.h>
int main()
{
    int a ,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    if(a>b){
        printf("a is greater");
    }
    else
    {
        printf("b is greater");
    }
    return 0;
}