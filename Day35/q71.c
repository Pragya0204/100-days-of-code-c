//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include<stdio.h>
int main()
{
int a[10][10],i,j,n,m;
printf("Enter number of rows and columns");
scanf("%d%d",&n,&m);
printf("Enter elements");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The 2d array is");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
return 0;
}
