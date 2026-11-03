//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include<stdio.h>
int main()
{
char s1[100],s2[100];
int count[26]={0},i=0,flag=1;
scanf("%s",s1);
scanf("%s",s2);
while(s1[i]!='\0')
{
char ch=s1[i];
if(ch>='A'&&ch<='Z')
{
ch=ch+32;
}
if(ch>='a'&&ch<='z')
{
count[ch-'a']++;
}
i++;
}
i=0;
while(s2[i]!='\0')
{
char ch=s2[i];
if(ch>='A'&&ch<='Z')
{
ch=ch+32;
}
if(ch>='a'&&ch<='z')
{
count[ch-'a']--;
}
i++;
}
for(i=0;i<26;i++)
{
if(count[i]!=0)
{
flag=0;
break;
}
}
if(flag)
{
printf("Anagrams");
}
else
{
printf("Not anagrams");
}
return 0;
}
