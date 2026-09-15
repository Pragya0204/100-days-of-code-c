/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main()
{
int d,fine;
printf("Enter late days");
scanf("%d",&d);
if(d<6)
{
fine=2*d;
printf("fine is %d",fine);
}
else if(d<11)
{
fine=4*d;
printf("fine is %d",fine);
}
else if(d<31)
{
fine=6*d;
printf("fine is %d",fine);
}
else
{
printf("Membership cancelled");
}
return 0;
}
