//how we can access rows and columns in 2d.
#include<stdio.h>
int main()
{
    int arr[4][3]={{11,67,34},{69,38,56},{89,78,23},{26,47,57}};
    printf("Array elements are: \n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
}