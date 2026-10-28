//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include<stdio.h>
int main()
{
int n,a[100],i,k,temp[100];
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter k");
scanf("%d",&k);
k=k%n;
for(i=0;i<n;i++)
temp[(i+k)%n]=a[i];
}
for(i=0;i<n;i++)
{
a[i]=temp[i];
}
for(i=0;i<n;i++)
printf("%d",a[i]);
}
printf("\n");
return 0;
}
