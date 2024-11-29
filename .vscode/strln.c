#include<stdio.h>
#include<string.h>
int main()
{
    /*char str[20];
    printf("Enter string:");
    gets(str);
    int len = strlen(str);
    printf("length of string = %d\n",len);
    strlen(str);
    printf("After Converted  to lowercase string is = %s\n",str);
    strupr(str);
    printf("After converting to uppercase string is = %s\n",str);
    strrev(str);
    printf("After reverse the string is = %s",str);
    char str1[20], str2[10];
    printf("Enter string:");
    gets(str1);
    strcpy(str2, str1);
    printf("After copy str2 = %s",str2);*/

    char str1[20], str2[10];
    printf("Enter String-1:");
    gets(str1);
    printf("Enter String-2:");
    gets(str2);
    int x = strcmp(str1, str2);
    if(x == 0)
        printf("Both string are same");
    else if(x == 1)
        printf("String-1 is greater then string-2");
    else 
    printf("String-1 is less then string-2");
    return 0;
}