//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include<stdio.h>
int main()
{
int a[10][10],i,j,m,n;
printf("enter no. of rows and column");
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
for(j=i+1;j<m;j++)
{
if(a[i][i]==a[j][j])
{
printf("false");
return 0;
}
}
}
printf("true");
return 0;
}
