#include<stdio.h>
int main()
{
    int age;
    printf("enter the age :",age);
    scanf("%d",&age);
    if(age<18){
        printf("your are not adult");
    }
    else{
        printf("your are an adult");
    }
    return 0;
}