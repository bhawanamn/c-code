//WAP to perform the sum of all the rows and columns of 2D array.
//WAP to find the percentage of five subjects
#include<stdio.h>
int main(){
    float sub_mark1,sub_mark2,sub_mark3,sub_mark4,total_marks,percentage;
    printf("Enter sub_mark1, sub_mark2, sub_mark3, sub_mark4: ");
    scanf("%f%f%f%f",&sub_mark1,&sub_mark2,&sub_mark3,&sub_mark4);
    total_marks = sub_mark1 + sub_mark2 + sub_mark3 + sub_mark4;
    percentage = (total_marks/160)*100;
    printf(" total_marks = %f\n percentage = %f\n", total_marks,percentage);
    return 0;
}