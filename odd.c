// homework of WAP to print n even number
#include<stdio.h>
int main(){
    int j,i;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            if(i == 1 || i == 5 || j== 1 || j == 5|| i ==j){
                   printf("* "); 
            }
            else{
                printf("  ");
            }
    }
    printf("\n");
    }
    return 0;

}