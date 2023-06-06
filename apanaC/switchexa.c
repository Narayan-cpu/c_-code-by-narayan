#include<stdio.h>
int main()
{
    int day;
    printf("enter the day(1-7)",day);
    scanf("%d",&day);
switch (day)
{
case 1:printf("monday");
    break;
case 2:printf("tuesday");
    break;
case 3:printf("wensday");
    break;
case 4:printf("thursday");
    break;
case 5:printf("friday");
    break;
case 6:printf("satarday");
    break;
case 7:printf("sunday");
    break;
default:printf("not a day");
}
return 0;
}