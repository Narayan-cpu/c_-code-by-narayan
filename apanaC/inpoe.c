#include<stdio.h>
int main()
{
    int num;
    do
    {
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d \n",num);
    if(num%2 !=0){
        break;
    }
    } while (1);
printf("thanks");
}