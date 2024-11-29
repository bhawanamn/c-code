//  WAP to read and display the name of the student
#include<stdio.h>
int main()
{
    char name[30] ,clgname[30];
    printf("Enter your full name:");
    gets(name);
    printf("Enter college name");
    gets(clgname);
    printf("Name = %s\n",name);
    printf("College name = %s",clgname);
    return 0;
}