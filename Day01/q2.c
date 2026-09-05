#include<stdio.h>
int main()
{
int a,b;
int sum,sub,mul,div;
printf("enter two numbers");
scanf("%d",&a);
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("sum of two numbers %d",sum);
printf("difference of two numbers %d",sub);
printf("product of two numbers %d",mul);
printf("division of two numbers %d",div);
return 0;
}
