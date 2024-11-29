//WApP to read and display the element of 2d array
#include<stdio.h>
int main()
{
    int row,col;
    printf(" Enter row and column size: ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    printf("Enter array Elements: ");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
        printf("Array elements are: \n");
        for(int i=0; i<row; i++)
        {
          for(int j=0; j<col; j++)  {
            printf(" %d",arr[i][j]);
          }
          printf("\n");
        }
    
}