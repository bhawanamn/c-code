//WAP  to find the greatest no among three
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b )
    {
        printf("a is greater");
    }
    else if(b>c)
    {
        printf("b is greater");
    }
    else if(c>a)
    {
        printf("c is greater");
    }
    return 0;
}