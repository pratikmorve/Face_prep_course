/*

Series V
Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
INPUT & OUTPUT FORMAT:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Print the series and refer the sample output for formatting.

SAMPLE INPUT:

4

SAMPLE OUTPUT:

121 225 361 529



Input (stdin)
4

Output (stdout)
121 225 361 529



Input (stdin)
5

Output (stdout)
121 225 361 529 729



Input (stdin)
3

Output (stdout)
121 225 361



*/


//Program


#include<iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;
int start =(11*11);
cout<<start<<" ";
for(i=1;i<n;i++)
{
int seris= ((11+4*i)*(11+4*i));
 cout<<seris<<" ";
}
}

