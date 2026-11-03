//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>
int main()
{
int a[10][10],i,j,m,n,sum=0;
printf("enter no. of rows and columns");
scanf("%d%d", &m, &n);
if(m!=n)
{
printf("Invalid< not a square matrix");
return 0;
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
sum=sum+a[i][j];
}
}
}
printf("Sum is %d\n", sum);
return 0;
}
