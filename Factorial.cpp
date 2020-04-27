/*

Factorial
Write a program to compute the factorial of a number using recursion.
INPUT AND OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.



Input (stdin)
5

Output (stdout)
The factorial of 5 is 120



Input (stdin)
10

Output (stdout)
The factorial of 10 is 3628800



Input (stdin)
11

Output (stdout)
The factorial of 11 is 39916800


*/




//Program


#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
int n;
cin >> n;
cout << "The factorial of "<<n<<" is "<< factorial(n);
return 0;
}
int factorial(int n)
{
if(n > 1)
return n * factorial(n - 1);
else
return 1;
}
