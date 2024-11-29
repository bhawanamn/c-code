//convert the temp. given in fahrenheit to celsius
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter fahrenheit");
    scanf("%f",&fahrenheit);
    printf("celsius =%f",(fahrenheit- 32) * 5/9);
    return 0;
}