/*

Data mining
In the University examinations conducted during the past 5 years, the toppers registration numbers were 7126, 82417914, 7687 and 6657. Your father is an expert in data mining and he could easily infer a pattern in the toppers registration numbers. In all the registration numbers listed here, the sum of the odd digits is equal to the sum of the even digits in the number. He termed the numbers that satisfy this property as Probable Topper Numbers. Now, write a program to find whether a given number is a probable topper number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

The output consists of a single line. Refer the sample output for details.


Input (stdin)
234

Output (stdout)
No



Input (stdin)
127

Output (stdout)
No



Input (stdin)
678

Output (stdout)
No


*/




//Program


#include<iostream>
using namespace std;

int main()
{
int n, sum_even = 0, sum_odd= 0, rem;
cin>>n;

while ( n> 0)
{
rem = n % 10;
if (rem % 2 == 0)
{
sum_even = sum_even + rem;
}
else
{
sum_odd = sum_odd + rem;
}
n = n/ 10;
}
if(sum_even==sum_odd)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
return 0;
}
