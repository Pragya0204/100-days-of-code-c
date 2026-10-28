//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include<stdio.h>
int main()
{
int a[100],n,i,pos;
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter elementd");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter position to be deleted");
scanf("%d",&pos);
if(pos<=0||pos>n)
{
printf("Invalid position");
}
else
{
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
}
return 0;
}
