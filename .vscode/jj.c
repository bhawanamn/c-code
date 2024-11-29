//WAP to find the greatest number among three.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("Enter c");
    scanf("%d",&c);
    if(a>b){
        printf("a is greater");
    }
    else if(b>c){
        printf("b is greater");
    }
    else if(c>a){
        printf("c is greater");
    }
    return 0;
}