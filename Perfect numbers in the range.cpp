/*

Perfect numbers in the range
Write a program to find the perfect numbers between a given range.
Input Format:

The first input contains an integer which denotes the starting number of the range

The second input contains an integer which denotes the ending number of the range

Output Format:

Print the perfect numbers in a given range

Sample Input:

1

10

Sample Output:

6





Input (stdin)
1
20

Output (stdout)
6





Input (stdin)
1
100

Output (stdout)
6 28






Input (stdin)
1
500

Output (stdout)
6 28 496

*/




//Program


#include<iostream>
using namespace std;
int main()
{
int i, j, start, end, sum;
cin>>start;
cin>>end;  
for(i=start; i<=end; i++)
{
sum = 0;
for(j=1; j<i; j++)
{
if(i % j == 0)
{
sum += j;
}
}   
if(sum == i)
{
cout<<i<<" ";
}
}
return 0;
}
