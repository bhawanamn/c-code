//function with arguments and return type
#include<stdio.h>
void getMessage(void);
int convertToBinary(void);
int computeSimpleIntrest(int, int, int);
int main()
{
    int p,r,t;
    printf("Enter P,R,T:");
    scanf("%d%d%d", &p, &r, &t);
    int si = computerSimpleInterest(p,r,t);
    printf("Simple Intrest = %d",si);
    return 0;
}