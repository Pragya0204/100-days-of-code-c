//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include<stdio.h>
int main()
{
char s[200],longest[100],word[100];
int i=0,j=0,max=0;
scanf("%[^\n]",s);
while(1)
{
if(s[i]!=' '&&s[i]!='\0')
{
word[j]=s[i];
j++;
}
else
{
word[j]='\0';
if(j>max)
{
max=j;
int k=0;
while(word[k]!='\0')
{
longest[k]=word[k];
k++;
}
longest[k]='\0';
}
j=0;
if(s[i]=='\0')
{
break;
}
}
i++;
}
printf("%s",longest);
return 0;
}
