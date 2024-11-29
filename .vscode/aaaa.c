//WAP goto....
#include<stdio.h>
#include<stdlib.h>>
int main()
{
    int pin;
    abc:
    printf("Enter your pin:");
    scanf("%d",&pin);
    if(pin>999)
    {
       printf("It is valid\n");
       goto xyz;
    }
    else
    {
        xyz:
        printf("It is not valid\n");
    }
    return 0;
}