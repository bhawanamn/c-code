//WAP to check whether the given character is alphabet,digit or symbol
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        printf("It is alphabet");
    else if(ch>=48 && ch<=57)
        printf("It is digit");
    else  
        printf("It is symbol");
    return 0;
}