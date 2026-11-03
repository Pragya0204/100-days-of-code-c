//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include<stdio.h>
int main()
{
char s[100];
int len=0,i,j,k,first=1;
scanf("%s",s);
while(s[len]!='\0')
{
len++;
}
for(i=0;i<len;i++)
{
for(j=i;j<len;j++)
{
if(!first)
{
printf(",");
}
for(k=i;k<=j;k++)
{
printf("%c",s[k]);
}
first=0;
}
}
return 0;
}
