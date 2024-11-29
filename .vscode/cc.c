//wAP to read a number from the user and if the number is positive print cube otherwise square
#include<stdio.h>
int main()
{
    int n, Cube;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n>0)
    {
        Cube = n*n*n;
        printf("Cube = %d", Cube);
    }
    else
    {
        printf("Square = %d",n*n);
    }
   return 0;
    
 }