//WAP to find the area of triangle
#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("Enter base");
    scanf("%d",&base);
    printf("Enter height");
    scanf("%d",&height);
    area = 0.5 * base * height;
    printf("%f",area);
    return 0;
}