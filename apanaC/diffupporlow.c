#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character :",ch);
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("it's upper case letter");
    }
    else if(ch>='a' && ch<='z'){
        printf("it's lower case letter");
    }
    else{
        printf("it's a special character");
    }
}