//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>
int main()
{
int a[100],sum=0,n;
printf("Enter number of elements ");
scanf("%d",&n);
printf("Enter elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("Sum is %d ",sum);
return 0;
}
