/*

Series IV
Write a program to generate the following series 0,2,8,14,...,34.
Input format:

The input is an integer which denotes 'n'.

Output format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

0 2 8 14 24 34





Input (stdin)
3

Output (stdout)
0 2 8




Input (stdin)
10

Output (stdout)
0 2 8 14 24 34 48 62 80 98




Input (stdin)
4

Output (stdout)
0 2 8 14


*/



//Program


#include<iostream>
using namespace std;
int main()
{
int n,i,start=0;
cin>>n;  
for(i=1;i<=n;i++)
{
  if(i%2==0)
  {
   cout<<(i*i)-2<<" ";
  }
  else
  {
    cout<<(i*i)-1<<" ";
  }
}
}
