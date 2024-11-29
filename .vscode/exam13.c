//WAP to chcek whether two number are same or not if they are same print "both are same" otherwise print the largest among them
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    if(a == b)
    {
        printf("both numbers are same");
    }
    else if(a>b)
    {
        printf("%d is largest number",a);
    }
    else
    {
        printf("%d is largest number",b);
    }
    return 0;

}