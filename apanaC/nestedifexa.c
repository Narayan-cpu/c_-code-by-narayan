#include<stdio.h>
int main()
{ int num;
  printf("enter the number",num);
  scanf("%d",&num);
  if(num>=0){
    printf("positive \n");
    if(num % 2==0){
        printf("even \n");
    }else{
        printf("odd \n");
    }}else{
    printf("negative \n");
  }

}