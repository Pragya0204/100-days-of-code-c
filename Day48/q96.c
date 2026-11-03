//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include<stdio.h>
int main()
{
char s[200];
int start=0,end=0,i;
scanf("%[^\n]",s);
while(1)
{
if(s[end]==' '||s[end]=='\0')
{
for(i=end-1;i>=start;i--)
{
printf("%c",s[i]);
}
if(s[end]==' ')
{
printf(" ");
}
else
{
break;
}
start=end+1;
}
end++;
}
return 0;
}
