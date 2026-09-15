//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main()
{
char c;int a,b;
printf("Enter any operator +,-,/,*");
scanf("%c",&c);
printf("Enter two numbers");
scanf("%d%d",&a,&b);
switch(c)
{
case '+':
int sum=a+b;
printf("Sum is %d",sum);
break;
case '-':
int sub=a-b;
printf("Difference is %d",sub);
break;
case '*':
int mul=a*b;
printf("Product is %d",mul);
break;
case '/':
float div=(float)a/b;
printf("Division is %f",div);
break;
default:
printf("Invalid option");
break;
}
return 0;
}
