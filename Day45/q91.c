//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include<stdio.h>
int main()
{
char s[100];
int i=0;
scanf("%[^\n]",s);
while(s[i]!='\0')
{
char ch=s[i];
if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
{
printf("%c",ch);
}
i++;
}
return 0;
}
