//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
int main()
{
float p,a,r,t,si,ci;
printf("Enter principle");
scanf("%f",&p);
printf("Enter rate");
scanf("%f",&r);
printf("Enter time");
scanf("%f",&t);
si=(p*r*t)/100.0;
a=p;
for(int i=0;i<t;i++)
{
a+=a*(r/100.0);
}
ci=a-p;
printf("simple interest is %f",si);
printf("compound interest is %f",ci);
return 0;
}
