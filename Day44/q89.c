//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include<stdio.h>
int main()
{
char s[100],ch;
int count=0,i=0;
scanf("%[^\n]",s);
scanf(" %c",&ch);
while(s[i]!='\0')
{
if(s[i]==ch)
{
count++;
}
i++;
}
printf("%d",count);
return 0;
}
