//WAP to check whether a person is elgible for voting or not.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of a person:");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("eligble for voting");
    }
    else
    {
        printf("not elgible");
    }
    return 0;
    
}