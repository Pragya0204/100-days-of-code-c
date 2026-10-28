//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include<stdio.h>
int main()
{
int a[100],n,max,min;
printf("Enter number of elements ");
scanf("%d",&n);
printf("Enter elements ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(int i=1;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
if(min>a[i])
{
min=a[i];
}
}
printf("Maximum %d",max);
printf("Minimum %d",min);
return 0;
}
