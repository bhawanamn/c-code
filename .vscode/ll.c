//WAP to take input of five subject marks and display the grade.
#include<stdio.h>
int main()
{
    int sub_mark1, sub_mark2, sub_mark3, sub_mark4, sub_mark5, marks;
    printf("Enter five sub_marks:");
    scanf("%d %d %d %d %d",&sub_mark1, &sub_mark2, &sub_mark3, &sub_mark4, &sub_mark5);
    marks= (sub_mark1 + sub_mark2 + sub_mark3 + sub_mark4 + sub_mark5) /5;
    if(marks>=90){
        printf("A+");
    }
    else if(marks>=80 && marks<90){
        printf("A");
    }
    else if(marks>=70 && marks<80){
        printf("B+");
    }
    else if(marks>=60 && marks<70){
        printf("B");
    }
    else if(marks>=50 && marks<60){
        printf("C");
    }
    else if(marks<50){
        printf("FAIL");
    }
    return 0;

}