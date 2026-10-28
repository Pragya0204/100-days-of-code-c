//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>
int main()
{
int a[100],i,n,j,max_count,most_frequent;
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i = 0; i < n; i++)
{
int count = 0;
for (j = 0; j < n; j++)
{
if (a[i] == a[j])
{
count++;
}
}
if (count > max_count)
{
max_count = count;
most_frequent = a[i];
}
}
printf("%d\n", most_frequent);
return 0;
}
