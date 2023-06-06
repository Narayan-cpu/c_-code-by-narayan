#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :",num);
    scanf("%d",&num);
    for(int i=0;i<=10;i++){
        printf("%dx%d=%d \n",num,i,num*i);
    }
    return 0;
}