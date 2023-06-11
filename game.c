#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;//generate the random number between 1 to 100
  // printf("the random number is %d \n",number);
    //keep the loop running until number is guessed
    
    do
    {
    printf("Guess the number between 1 to 100 \n");
    scanf("%d",&guess);
    if(guess>number){
        printf("Lower number please! \n");
    }
    else if(guess<number){
        printf("Greater number please! \n");
    }
    else{
        printf("you guessed it in %d attempts \n",nguess);
    }
    nguess++;
    } while (guess!=number);
    
}