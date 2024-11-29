//WAP to copy the data from one array to another array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);
    int arr1[size];
    printf("Enter Array Elements : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    for(int i=0; i<size; i++){
        arr2[i] = arr1[i];
    }
    printf("Enter Array2 elements: ");
    for(int i=0; i<size; i++){
        printf("%d", arr2[i]);
    }
    return 0;
}
