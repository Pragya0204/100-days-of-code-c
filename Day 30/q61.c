//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>
int main()
{
int a[100],n,flag,s;
printf("Enter number of elements ");
scanf("%d",&n);
printf("Enter elements ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to be searched ");
scanf("%d",&s);
flag=0;
for(int i=0;i<n;i++)
{
if(a[i]==s)
{
flag=1;
printf("element found %d,at %d",s,(i+1));
break;
}
}
if(flag==0)
printf("element not found");
return 0;
}
