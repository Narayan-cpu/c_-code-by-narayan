#include<stdio.h>
int table( int num);
int main(){ int num;
    printf("enter the number:");
    scanf("%d",&num);
    table(num); //actual

return 0;
}

int table(int num){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",i*num);
    }
}