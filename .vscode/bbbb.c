//WAP to check whether the given number is prime or not.
#include<stdio.h>
int main()
{
    int n,flag=0,i=2;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==0)
    printf("Number is prime");
    else
    printf("Number is not prime");
    return 0;
}
//h.w
//armstrong..