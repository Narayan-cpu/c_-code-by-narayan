#include<stdio.h>
int main(){
    int n,tab=1;
    printf("enter the number: ",n);
    scanf("%d",&n);
    for (int i = 10; i>=1; i--)
    {
    printf("%dX%d=%d \n",n,i,n*i);
    }
    
}