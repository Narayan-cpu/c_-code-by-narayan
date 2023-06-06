#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter the number :",num);
    scanf("%d",&num);
    for (int i =1 ; i <= num; i++)
    {
        fact=fact*i;
    }
    
printf("factorial is:%d",fact);
}