//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include<stdio.h>
int main()
{
int a[100],b[100],i,n1,n2,c[200];
printf("Enter no. of elements of array a and b");
scanf("%d %d",&n1,&n2);
printf("Enter elements for array a");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter elements foe array b");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n1;i++)
{
c[i]=a[i];
}
for(i=0;i<n2;i++)
{
c[n1+i]=b[i];
}
for(i=0;i<n1+n2;i++)
{
printf("%d",c[i]);
}
printf("\n");
return 0;
}
