/*

Stock span
The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day. Now, you need to find out the span values for the given number of days and their daily prices. For example, if an array of 7 day's prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6} . FUNCTIONAL REQUIREMENTS: void stockSpan(int,int*);
Input Format:

Input consists of n+1 integers. The first integer corresponds to n, the number of days. The next n integers correspond to stock prices on days 1, 2...n.

Output Format:

The output consists of n integers that correspond to the span values.



Input (stdin)
7
100
80
60
70
60
75
85

Output (stdout)
1
1
1
2
1
4
6




Input (stdin)
4
55
21
33
12

Output (stdout)
1
1
2
1





Input (stdin)
3
12
43
21

Output (stdout)
1
2
1


*/




//Program


#include<iostream>
using namespace std;
int main()
{
  int n,last=0,c=0;
  int a[n];
  cin>>n;
  cin>>a[0];
  last=a[0];
  cout<<"1"<<endl;
  for(int i=1;i<n;i++)
  {
     cin>>a[i];
     if(last>a[i])
       cout<<"1"<<endl;
     else 
       cout<<(c=c+2)<<endl;
    last = a[i];
     
  }
}
