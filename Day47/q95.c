//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include<stdio.h>
int main()
{
char s1[100],s2[100],temp[200];
int l1=0,l2=0,i,j,found=0;
scanf("%s",s1);
scanf("%s",s2);
while(s1[l1]!='\0')
{
l1++;
}
while(s2[l2]!='\0')
{
l2++;
}
if(l1!=l2)
{
printf("Not rotation");
return 0;
}
for(i=0;i<l1;i++)
{
temp[i]=s1[i];
temp[i+l1]=s1[i];
}
temp[2*l1]='\0';
for(i=0;i<=l1;i++)
{
for(j=0;j<l2;j++)
{
if(temp[i+j]!=s2[j])
{
break;
}
}
if(j==l2)
{
found=1;
break;
}
}
if(found)
{
printf("Rotation");
}
else
{
printf("Not rotation");
}
return 0;
}
