/*

Series III
Write a program to generate the first 'n' terms of the following series 6, 11, 21, 36, 56,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

6 11 21 36 56 81




Input (stdin)
3

Output (stdout)
6 11 21




Input (stdin)
10

Output (stdout)
6 11 21 36 56 81 111 146 186 231




Input (stdin)
2

Output (stdout)
6 11


*/



//Program


#include<iostream>
using namespace std;
int main()
{
int n,i,start=6;
cin>>n;
cout<<start<<" ";
int x=start;
int j=5;
for(i=1;i<n;i++)
{
x=x+j;
j=j+5;
 cout<<x<<" ";
}
}

