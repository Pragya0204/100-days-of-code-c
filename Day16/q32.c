//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
int n,d,r=0;
printf("Enter a number");
scanf("%d",&n);
int data=n;
while(n!=0)
{
d=n%10;
r=r*10+d;
n=n/10;
}
if(r==data)
{
printf("Palindrome number");
}
else
{
printf("Not palindrome");
}
return 0;
}
