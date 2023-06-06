#include<stdio.h>
int sqare(int a);
float cir(float r);
int rect(int l,int b);
int main(){
    //int a;
    int l,b;
    //float r;
   // printf("enter side of square:",a);
   // scanf("%d",&a);
    printf("enter length and breadth:",l,b);
    scanf("%d %d",&l,&b);
    //printf("enter the radius:",r);
    //scanf("%f",&r);
  // printf("area is:%d",square(a));
   printf( "area is : %d",rect(l,b));
   // printf("area is:%f",cir(r));
}
int sqare(int a){
 return a*a;
}
int rect(int l,int b){
    return l*b;
}
float cir(float r){
    return 3.14*r*r;
}