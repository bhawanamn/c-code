//WAP to count number of even and odd elements in an array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int even=0, odd=0;
    for(int i=1; i<=size; i++){
        if(arr[i]%2 == 0)
        even++;
        else 
        odd++;
    }
    printf("Total even elements are : %d\n",even);
    printf("Total odd elements are: %d\n",odd);
    return 0;
}