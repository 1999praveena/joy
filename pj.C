#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter num \n");
scanf("%d",&a);
if(a<0)
{
printf("the num is negative");
}
elseif(a>0)
{
printf("the num is positive");
}
elseif(a==0)
{
printf("the num is zero \n");
}
getch();
return 0;
}
