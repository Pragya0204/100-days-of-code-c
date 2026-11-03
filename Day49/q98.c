//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include<stdio.h>
int main()
{
char s[100];
int i=0,last_space=-1;
scanf("%[^\n]",s);
while(s[i]!='\0')
{
if(s[i]==' ')
{
last_space=i;
}
i++;
}
if(last_space==-1)
{
printf("%s",s);
return 0;
}
if(s[0]!=' ')
{
char ch=s[0];
if(ch>='a'&&ch<='z')
{
ch=ch-32;
}
printf("%c.",ch);
}
for(i=0;i<last_space;i++)
{
if(s[i]==' '&&s[i+1]!=' '&&i+1<last_space)
{
char ch=s[i+1];
if(ch>='a'&&ch<='z')
{
ch=ch-32;
}
printf("%c.",ch);
}
}
printf(" %s",&s[last_space+1]);
return 0;
}
