//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>
int main() {
int n, i, val;
long long actual_sum = 0;
if (scanf("%d", &n) != 1 || n <= 0) {
return 0;
}
for (i = 0; i < n; i++) {
scanf("%d", &val);
actual_sum += val;
}
long long expected_sum = (long long)n * (n + 1) / 2;
printf("%lld\n", expected_sum - actual_sum);
return 0;
}
