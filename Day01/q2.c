//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
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
