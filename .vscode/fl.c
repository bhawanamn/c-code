//WAP to check whether given no is single digit,two digit,third digitor more then three digit
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    if(n>=0 && n<=9)
    {
        printf("It is single digit");
    }
    else if(n>=10 && n<=99)
    {
        printf("It is two digit");
    }
    else if(n>=100 && n<=999)
    {
        printf("It is three digit");
    }
    else
    {
        printf("more than three digit number");
    }
    return 0;
}