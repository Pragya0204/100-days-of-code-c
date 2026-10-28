//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>
int main()
{
int a[100],i,j,n,s,ss;
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
s=a[0];
for(i=0;i<n;i++)
{
if(s>a[i])
{
s=a[i];
j=i;
}
}
ss=a[n-j-1];
for(i=0;i<n;i++)
{
if(ss>a[i] && j!=i)
{
ss=a[i];
}
}
printf("second smallest %d",ss);
return 0;
}
