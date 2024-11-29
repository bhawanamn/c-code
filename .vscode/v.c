// find the total marks and percentage of five marks
#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,percentage,total_marks;
    printf("Enter sub1,sub2,sub3,sub4,sub5=");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total_marks/5;
    printf("total_marks = %f\n percentage = %f\n", total_marks, percentage);
    return 0;
}