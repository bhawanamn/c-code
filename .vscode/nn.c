//WAP to find circle,square and rectangle by user's choice.
#include<stdio.h>
int main()
{
    float pi, radius, length, breadth, side;
    pi = 3.14;
    int n;
    printf("1.Area of circle\n");
    printf("2.Area of rectangle\n");
    printf("3.Area of square\n");
    printf("1,2,3=");
    scanf("%d",&n);
    switch(n){
        case 1:
              printf("Enter radius of circle");
               scanf("%f",&radius);
               printf("area of circle= %f\n", pi * radius * radius);
               break;

        case 2:
              printf("Enter length and breadth for rectangle");
              scanf("%f %f",&length,&breadth);
              printf("area of rectangle=%f\n", length * breadth);
              break;

        case 3:
              printf("Enter side of square:");
              scanf("%f", &side);
              printf("area of square= %f\n", side * side);
              break;
        }
        return 0;
}