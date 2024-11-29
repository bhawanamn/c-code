//WAP to calculate perimeter of rectangle
#include<stdio.h>
int main()
{
    int length,width;
    printf("Enter length\n");
    scanf("%d",&length);
    printf("Enter width\n");
    scanf("%d",&width);
    printf("perimeter of rectangle is %d\n", 2 * (length + width));
    return 0;
}