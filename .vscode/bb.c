//WAP to find a ^ b
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,res;
    printf("Enter the value of base and power :");
    scanf("%d %d", &a , &b);
    res = pow(a,b);
    printf("Power = %d",(int)pow(a,b));
    return 0;
}


/* 
    Syntax of pow() function:
    double pow(double base,double power)

*/