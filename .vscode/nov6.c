#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter array size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int target,flag=0;
    printf("Enter searching element :");
    scanf("%d", &target);
    //logic of linear search
    for(int i=0; i<size; i++){
        if(arr[i]==target)
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
    printf("Element found at position %d",i);
    else
    printf("Element not found");
    return 0;
}