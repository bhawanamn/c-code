//WAP to find out marks and percentage of five subject marks.
#include<stdio.h>
int main()
{
    float sub_mark1,sub_mark2,sub_mark3,sub_mark4,sub_mark5,total_marks,percentage;
    printf("Enter sub_mark1\n");
    scanf("%f",&sub_mark1);
    printf("Enter sub_mark2\n");
    scanf("%f",&sub_mark2);
    printf("Enter sub_mark3\n");
    scanf("%f",&sub_mark3);
    printf("Enter sub_mark4\n");
    scanf("%f",&sub_mark4);
    printf("Enter sub_mark5\n");
    scanf("%f",&sub_mark5);
    total_marks = sub_mark1 + sub_mark2 + sub_mark3 + sub_mark4 + sub_mark5;
    percentage = total_marks/5;
    printf("total_marks = %f\n",total_marks);
    printf("percentage = %f\n",percentage);
    return 0;
}