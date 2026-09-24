//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h>
int main()
{
int n,d,count=0,sum=0;
printf("Enter a number");
scanf("%d",&n);
int data=n;
while(n!=0)
{
n=n/10;
count++;
}
n=data;
while(n!=0)
{
d=n%10;
sum=sum+pow(d,count);
n=n/10;
}
if(sum==data)
printf("Armstrong");
else
printf("Not armstrong");
return 0;
}
