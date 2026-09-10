//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2,t;
printf("Enter value of a,b,c");
scanf("%f%f%f",&a,&b,&c);
t=b*b-4*a*c;
if(t<0)
printf("\n Roots are imaginary");
else
{
r1=(-b+sqrt(t))/2*a;
r2=(-b-sqrt(t))/2*a;
printf("\n root1=%f",r1);
printf("/n root2=%f",r2);
}
return 0;
}
