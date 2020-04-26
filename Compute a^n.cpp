/*
Compute a^n
Write a program to compute a^n (a power n) using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers

Refer sample input and output for formatting specifications



Input (stdin)
3
1

Output (stdout)
Enter the value of a
Enter the value of n
The value of 3 power 1 is 3




Input (stdin)
4
3

Output (stdout)
Enter the value of a
Enter the value of n
The value of 4 power 3 is 64



Input (stdin)
6
5

Output (stdout)
Enter the value of a
Enter the value of n
The value of 6 power 5 is 7776



*/




//Program


#include <iostream>
using namespace std;
int power(int b,int e)
{
if(e==0)
return 1;
else 
return (b*power(b,e-1));
} 
int main()
{
int a,n;
cout<<"Enter the value of a";
cin>>a;
cout<<"\nEnter the value of n";
cin>>n;
cout<<"\nThe value of "<<a<<" power "<<n<<" is "<<power(a,n);
}
