//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include<stdio.h>
int main()
{
char s[100];
int i=0;
scanf("%[^\n]",s);
if(s[0]!=' '&&s[0]!='\0')
{
char ch=s[0];
if(ch>='a'&&ch<='z')
{
ch=ch-32;
}
printf("%c.",ch);
}
while(s[i]!='\0')
{
if(s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\0')
{
char ch=s[i+1];
if(ch>='a'&&ch<='z')
{
ch=ch-32;
}
printf("%c.",ch);
}
i++;
}
return 0;
}
