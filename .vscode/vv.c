//WAp to find the maximum of N number
#include<stdio.h>

int main()
{
    int n,number,maximum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        printf("Enter number : ");
        scanf("%d",&number);
        if(number>maximum)
            maximum=number;
    }
    printf("maximum = %d", maximum);
    return 0;
}
