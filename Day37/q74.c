//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include<stdio.h>
int main()
{
int a[10][10],i,j,m,n,transpose;
printf("enter no. of rows and columns");
scanf("%d%d",&m,&n);
printf("enter elements");
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
printf("%d",a[j][i]);
}
}
return 0;
}
