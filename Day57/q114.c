//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>
int main() {
char s[100001];
int last_index[256];
int i, end;
int max_len = 0;
int start = 0;
if (fgets(s, sizeof(s), stdin) == NULL) {
printf("0\n");
return 0;
}
size_t len = strlen(s);
if (len > 0 && s[len - 1] == '\n') {
s[len - 1] = '\0';
}
for (i = 0; i < 256; i++) {
last_index[i] = -1;
}
for (end = 0; s[end] != '\0'; end++) {
unsigned char c = (unsigned char)s[end];
if (last_index[c] >= start) {
start = last_index[c] + 1;
}
last_index[c] = end;
if (end - start + 1 > max_len) {
max_len = end - start + 1;
}
}
printf("%d\n", max_len);
return 0;
}
