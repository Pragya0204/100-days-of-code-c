//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/


#include<stdio.h>
int main()
{
char s[100];
int sp=0,d=0,spl=0,i=0;
scanf("%[^\n]",s);
while(s[i]!='\0')
{
if(s[i]==' ')
{
sp++;
}
else if(s[i]>='0'&&s[i]<='9')
{
d++;
}
else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
{
}
else
{
spl++;
}
i++;
}
printf("Spaces=%d, Digits=%d, Special=%d",sp,d,spl);
return 0;
}
