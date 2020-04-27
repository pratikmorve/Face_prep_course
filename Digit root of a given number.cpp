/*

Digit root of a given number
Write a program to find the repeated sum of digits of a number until it becomes a single-digit number.
Input Format:

The input contains an integer which denotes 'n'

Output Format:

Print the single digit number



Input (stdin)
99

Output (stdout)
9



Input (stdin)
887

Output (stdout)
5



Input (stdin)
772

Output (stdout)
7


*/





//Program


#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
if(x==0)
cout<<0;
else if(x%9==0)
cout<<9;
else
cout<<x%9;
return 0;
}
