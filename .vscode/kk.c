//WAP to check whether the given number is single digit, two digit, three digit or more the three digits.
//WAP to check which number is greatest.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is largest");
    }
    else if(b>a && b>c){
        printf("b is largest");
    }
    else if(c>b && c>a){
        printf("c is largest");
    }
    return 0;

    
}