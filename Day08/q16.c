//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("a is the largest %d",a);
else
printf("c is the largest %d",c);
}
else
{
if(b>c)
printf("b is the largest %d",b);
else
printf("c is the largest %d",c);
}
return 0;
}
