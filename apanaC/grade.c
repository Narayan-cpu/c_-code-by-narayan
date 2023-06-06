#include<stdio.h>
int main(){
    int mark;
    printf("enter your mark :",mark);
    scanf("%d",&mark);
    if(mark<=100 && mark>=90){
        printf("grade :A+");
    }
    else if(mark<=89 && mark>=80){
    printf("grade :A");
    }
    else if(mark<=79 && mark>=60){
        printf("grade :B");    }
    else{
        printf("grade: fail");
    }
    return 0;
}