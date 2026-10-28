//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h>
int main()
{
int a[10][10],i,j,m,n,flag=1;
printf("Enter rows and columns");
scanf("%d%d",&m,&n);
printf("Enter elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
if(m!=n)
{
flag=0;
}
else
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=a[j][i])
{
flag=0;
break;
}
}
}
}
if(flag==1)
printf("true it is a symmetric matrix");
else
printf("false, it is not a symmetric matrix");
return 0;
}
