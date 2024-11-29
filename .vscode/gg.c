//wAP to check whether the given alphabet is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Alphabet");
    scanf("%c",&ch);
    if(ch=='a' || ch== 'A' || ch=='e' || ch=='E' || ch=='i' || ch =='I' || ch=='o' || ch== 'O'|| ch=='u' || ch=='U')
        printf("It is Vowel");
    else
        printf("It is consonant");
    return 0;
}