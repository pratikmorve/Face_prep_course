/*


Series I
Write a program to generate the first 'n' terms of the following series 0.5, 1.5, 4.5, 13.5, ...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

5

Sample Output:

0.5 1.5 4.5 13.5 40.5





Input (stdin)
1

Output (stdout)
0.5





Input (stdin)
4

Output (stdout)
0.5 1.5 4.5 13.5




Input (stdin)
6

Output (stdout)
0.5 1.5 4.5 13.5 40.5 121.5




*/



//Program

#include<iostream>
using namespace std;
int main()
{
 int n,j;
 float i=0.5,x;
 x=i;
 cin>>n;
 cout<<x<<" ";
 for(j=1;j<n;j++)
 {
 x=x*3;
 cout<<x<<" ";
}
}
