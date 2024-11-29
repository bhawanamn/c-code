#include<stdio.h>
int main()
{
    char ch;
    int x;
    float y;
    double z;
    printf("Enter character value");
    scanf("%c",&ch);
    printf(" Enter integer value");
    scanf("%d",&x);
    printf(" Enter float value");
    scanf("%f",&y);
    printf(" Enter double value");
    scanf("%lf",&z);
    printf("ch =%c",ch);
    printf("x= %d",x);
    printf("y= %f",y);
    printf("z= %lf",z);
    return 0;
}