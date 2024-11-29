//WAP to check the given number is even or odd.
#include<stdio.h>
int main(){
    int x,y,even,odd;
    printf("Enter the value of x");
    scanf("%d",&x);
    if(x%2==0){
       printf("The given number is even",&x);
    }
    else{
        printf("The given number is odd",&y);
    }
    return 0;
}