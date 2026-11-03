//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include<stdio.h>
int main()
{
char s[100];
int freq[26]={0},i=0;
scanf("%[^\n]",s);
while(s[i]!='\0')
{
if(s[i]>='a'&&s[i]<='z')
{
freq[s[i]-'a']++;
}
i++;
}
i=0;
while(s[i]!='\0')
{
if(s[i]>='a'&&s[i]<='z'&&freq[s[i]-'a']>1)
{
printf("%c",s[i]);
break;
}
i++;
}
return 0;
}
