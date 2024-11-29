//WAP to find area and perimeter
#include<stdio.h>
int main()
{
    int length,width,a;
    float radius;
    float pi=3.14;
    printf("Enter radius");
    scanf("%f",&radius);
    printf("area of circle =%f", pi*radius*radius);
    printf("perimeter of circle=%f", 2*pi*radius);

    printf("Enter a");
    scanf("%d",&a);
    printf("area of square =%d",a * a);
    printf("perimeter of square =%d",4 * a );

    printf("Enter length");
    scanf("%d", &length);
    printf("Enter width");
    scanf("%d", &width);
    printf("area of rectangle =%d", length * width);
    printf("perimeter of rectangle =%d", 2 * (length + width));
    return 0;


}