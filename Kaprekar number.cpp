/*

Kaprekar number
Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. If the resultant sum is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number since 92 = 81 & 8 + 1 = 9 297 is a Kaprekar number as 2972 = 88209 & 88 + 209 = 297 Write a program to find whether the given number is a Kaprekar number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

Refer sample output for details.



Input (stdin)
45

Output (stdout)
Kaprekar Number



Input (stdin)
3

Output (stdout)
Not a Kaprekar Number



Input (stdin)
25

Output (stdout)
Not a Kaprekar Number

*/



//Program



#include <iostream>
#include<math.h>
using namespace std;
string iskaprekar(int n)
{
int square = n * n;
int total_digits = 0;
while (square)
{
total_digits++;
square /= 10;
}
square = n*n;
for (int r_digits=1; r_digits<total_digits; r_digits++)
{
int eq_parts = pow(10, r_digits);
if (eq_parts == n)
continue;
int sum = square/eq_parts + square % eq_parts;
if (sum == n)
return "Kaprekar Number";
}
return "Not a Kaprekar Number";
}
int main()
{
int n1;
cin>>n1;
cout<<iskaprekar(n1);
}
