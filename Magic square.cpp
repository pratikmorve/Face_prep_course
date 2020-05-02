/*

Magic square
A magic square is an arrangement of numbers (usually integers) in a square grid, there numbers in the forward and backward main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.
Input Format:

The input consists of (n*n+1) integers. 

The first integer corresponds to the number of rows/columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 5.

Output Format:

Print yes if it is a magic square. Print no if it is not a magic square.

Sample Input:

2

4 5

5 4

Sample Output:

No





Input (stdin)
2
4 5
5 4

Output (stdout)
No




Input (stdin)
4
1 2 3 4
5 6 7 8
9 10 11 12

Output (stdout)
No




Input (stdin)
3
1 2 3
3 1 2
2 3 1

Output (stdout)
No



*/



//Program


#include<iostream>
using namespace std;
int main()
{
int size;
cin>>size;
int a[10][10];
int row,column;
int sum,sum1,sum2;
int flag=0;
for(row=0;row<size;row++)
{
for(column=0;column<size;column++)
cin>>a[row][column];
}
sum=0;
for(row=0;row<size;row++)
{
for(column=0;column<size;column++)
{
if(row==column)
sum=sum+a[row][column];
}
}
for(column=0;column<size;column++)
{
sum1=0;
for(column=0;column<size;column++)
{
sum1=sum1+a[row][column];
}
if(sum==sum1)
flag=1;
else
{
flag=0;
break;
}
}
for(row=0;row<size;row++)
{
sum2=0;
for(column=0;column<size;column++)
{
sum2=sum2+a[column][row];
}
if(sum==sum2)
flag=1;
else
{
flag=0;
break;
}
}
if(flag==1)
cout<<"Yes";
else
cout<<"No";
return 0;
}
