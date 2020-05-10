/*

Sum of even numbers and sum of odd numbers
Arun and Kalai were playing a puzzle game with a given set of numbers. They need to find the odd and even numbers and find the sum of the odd numbers and the sum of the even numbers. Write a program to help them to solve the puzzle game and to win the mobile phone.
Input Format:

Input consists of n+1 integers. 

The first integer corresponds to ‘n’, the size of the array. 

The next ‘n’ integers correspond to the elements in the array. 

Assume that the maximum value of n is 15.

Output Format:

Refer to sample output for details.



Input (stdin)
5
2
3
6
8
-1

Output (stdout)
The sum of the even numbers in the array is 16
The sum of the odd numbers in the array is 2




Input (stdin)
4
1
2
3
-1

Output (stdout)
The sum of the even numbers in the array is 2
The sum of the odd numbers in the array is 3




Input (stdin)
3
1
2
3

Output (stdout)
The sum of the even numbers in the array is 2
The sum of the odd numbers in the array is 4


*/




//Program


#include <iostream>
using namespace std;
int main()
{
int a[15],n;
int i,oddsum=0,evensum=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%2==0)
{
evensum=evensum+a[i];
}
else
{
oddsum=oddsum+a[i];
}
}
cout<<"The sum of the even numbers in the array is "<<evensum;
cout<<"\nThe sum of the odd numbers in the array is "<<oddsum;
return 0;
}
