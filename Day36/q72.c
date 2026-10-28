//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include<stdio.h>
int main()
{
int a[10][10],i,j,m,n,sum=0;
printf("enter no of rows and columns");
scanf("%d%d",&n,&m);
printf("Enter elements");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
sum=sum+a[i][j];
}
}
printf("Sum is %d",sum);
return 0;
}
