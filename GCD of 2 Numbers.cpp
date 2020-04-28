/*

GCD of 2 Numbers
Write a program to compute GCD of 2 numbers using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers.

Refer sample input and output for formatting specifications.


Input (stdin)
36
27

Output (stdout)
G.C.D of 36 and 27 = 9



Input (stdin)
43
34

Output (stdout)
G.C.D of 43 and 34 = 1



Input (stdin)
222
443

Output (stdout)
G.C.D of 222 and 443 = 1

*/




//Program



#include<iostream> 
using namespace std;
int gcd(int n,int m)
{
if((n>=m)&&((n%m)==0))
return(m);
 else
gcd(m,(n%m));
} 
int main()
{
int n,m,result;
cin>>n;
cin>>m;
result=gcd(n,m);
cout<<"G.C.D of "<<n<<" and "<<m<<" = "<<result; 
return 0;
}

