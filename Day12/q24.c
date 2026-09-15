/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include<stdio.h>
int main()
{
int u,bill;
printf("Enter units");
scanf("%d",&u);
if(u<101)
{
bill=u*5;
printf("Bill is %d",bill);
}
else if(u<201)
{
bill=u*7;
printf("Bill is %d",bill);
}
else if(u<301)
{
bill=u*10;
printf("Bill is %d",bill);
}
else
{
bill=u*12;
printf("Bill is %d",bill);
}
return 0;
}
