//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include<stdio.h>
int main()
{
char s[100];
int v=0,c=0,i=0;
scanf("%[^\n]",s);
while(s[i]!='\0')
{
char ch=s[i];
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
v++;
}
else
{
c++;
}
}
i++;
}
printf("Vowels=%d, Consonants=%d",v,c);
return 0;
}
