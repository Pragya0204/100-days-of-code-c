//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include<stdio.h>
int main()
{
int a[10][10],b[10][10],i,j,m,n,sum[10][10];
printf("Enter rows and columns");
scanf("%d%d",&m,&n);
printf("Enter elements in matrix a");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter elements in matrix b");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
sum[i][j]=a[i][j]+b[i][j];
printf("%d",sum[i][j]);
}
printf("\n");
}
return 0;
}

