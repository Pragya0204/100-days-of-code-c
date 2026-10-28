//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include<stdio.h>
int main()
{
int n,a[100],i,x,pos;
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to be inserted");
scanf("%d",&x);
printf("Enter the position at which the element is to be inserted");
scanf("%d",&pos);
if(pos<=0||pos>n+1)
{
printf("Invalid position");
}
else
{
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=x;
n++;
printf("Final array");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
return 0;
}
