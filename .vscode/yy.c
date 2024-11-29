//WAP to read a 5 digit number from the user and perform the sum of their digits
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter 5 digit6 number ");
    scanf("%d",&n);
    sum += n%10;
    n = n/10;
    sum = sum + n%10;
    n = n/10;
    sum = sum + n%10;
    n = n/10;
    sum = sum + n%10;
    n = n/10;
    sum = sum + n%10;
    n = n/10;

}