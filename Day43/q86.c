//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
char s[100];
int len=0,i,flag=1;
scanf("%[^\n]",s);
while(s[len]!='\0')
{
len++;
}
for(i=0;i<len/2;i++)
{
if(s[i]!=s[len-1-i])
{
flag=0;
break;
}
}
if(flag)
{
printf("Palindrome");
}
else
{
printf("Not palindrome");
}
return 0;
}
