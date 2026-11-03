//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include<stdio.h>
int main()
{
int a[10][10],i,j,m,n,k,r,c;
printf("Enter no. of rows and columns");
scanf("%d%d",&m,&n);
printf("Enter elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(k=0;k<m+n-1;k++)
{
if(k%2==0)
{
r=(k<m)?k:m-1;
c=k-r;
while(r>=0&&c<n)
{
printf("%d ",a[r][c]);
r--;
c++;
}
}
else
{
c=(k<n)?k:n-1;
r=k-c;
while(c>=0&&r<m)
{
printf("%d ",a[r][c]);
r++;
c--;
}
}
}
return 0;
}
