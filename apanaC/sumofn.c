#include<stdio.h>
int main(){
    int num;
    printf("enter the num :",num);
    scanf("%d",&num);
    int sum=0;
    for (int i = 0; i<=num; i++)
    {
        sum=sum+i;
        
    }
   printf("sum is %d \n",sum); 
}