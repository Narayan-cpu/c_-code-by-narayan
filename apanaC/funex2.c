#include<stdio.h>
void namaste();
void bonju();
int main(){
 printf("enter f for french and i for india :");
 char ch;
 scanf("%c",&ch);
 if(ch =='i'){
    namaste();
 }else{
    bonju();
 }
 return 0;
}
void namaste(){
    printf("namaste");
}
void bonju(){
    printf("bonjour");
}