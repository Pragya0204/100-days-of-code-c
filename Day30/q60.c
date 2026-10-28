//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>
int main()
{
int a[100],n,c1=0,c2=0,c3=0;
printf("Enter number of elements ");
scanf("%d ",&n);
printf("Enter elements ");
for(int i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
if(a[i]>0)
{
c1++;
}
if(a[i]<0)
{
c2++;
}
if(a[i]==0)
{
c3++;
}
}
printf("positive %d ,negative %d ,Zero %d ",c1,c2,c3);
return 0;
}
