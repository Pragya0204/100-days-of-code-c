//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>
int main()
{
int a[10][10],n,m,i,j,rowsum[10];
printf("enter rows and columns");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
rowsum[i]=0;
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
rowsum[i]=rowsum[i]+a[i][j];
}
}
for(i=0;i<n;i++)
{
printf("%d",rowsum[i]);
}
printf("\n");
return 0;
}
