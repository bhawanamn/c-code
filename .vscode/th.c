//WAP  to calculate total salary
#include<stdio.h>
int main()
{
    int salary;
    float DA,HRA,total_salary;
    printf("Enter salary");
    scanf("%d",&salary);
    if(salary<=2000)
    {
        DA = 10.0;
        HRA = 20.0;
    }
    else if(salary>2000 && salary <=5000)
    {
        DA = 20.0;
        HRA = 30.0;
    }
    else if(salary>5000 && salary<=10000)
    {
        DA= 30.0;
        HRA= 40.0;
    }
    else if(salary>10000)
    {
        DA = 50.0;
        HRA = 50.0;
    }
    DA = (salary * DA) /100;
    HRA = (salary* HRA) /100;
    total_salary = salary + DA + HRA;
    printf("TOTAL SALARY IS %f",total_salary);
    return 0;
}