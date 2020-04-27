/*

Dollars & Cents
Write a C++ program to add two dollars and cents.
INPUT & OUTPUT FORMAT:

Input consists of 4 integers. First two inputs correspond to the value of the first dollar and cent. Next two inputs correspond to the value of the second dollar and cent. Output should print the sum of dollar and cent.


Input (stdin)
30
10
140
99

Output (stdout)
171
9


Input (stdin)
99
99
99
99

Output (stdout)
199
98


Input (stdin)
45
23
123
100

Output (stdout)
169
23


*/




//Program


#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3,n4;
cin>>n1;
cin>>n2;
cin>>n3;
cin>>n4;
int doller1_in_cents = n1*100;
int doller2_in_cents = n3*100;
int total_in_cents = doller1_in_cents + doller2_in_cents + n2 + n4;
cout<<(total_in_cents/100);
cout<<"\n"<<(total_in_cents%100);
}
