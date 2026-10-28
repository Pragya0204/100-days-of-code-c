//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include<stdio.h>
int main()
{
int a[100],n,i,x,mid,first,last;
printf("Enter no. of elements");
scanf("%d",&n);
printf("Enter sorted array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter a number to find");
scanf("%d",&x);
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{
if(x>a[mid])
{
first=mid+1;
}
else if(a[mid] == x)
{
printf("%d found at location %d\n", x, mid+1);
break;
}
else
{
last=mid-1;
}
mid=(first+last)/2;
}
if(first>last)
{
printf("Not found! %d is not present in the list",x);
}
return 0;
}
