/*

Maximum element in each column
In a family, the people are arranged in rows and columns. Male persons in the families are arranged in a row and females are arranged in a column. Find the eldest women in each column. (Write a program to find the maximum element in each column of the matrix.)
Input Format:

The input consists of (m*n+2) integers. 

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 10.

Output Format:

Refer to the sample output for details.

Sample Input:

3

2

4 5

6 9

0 3

Sample Output:

6

9





Input (stdin)
3
3
22 23 25
25 22 26
26 27 23

Output (stdout)
26
27
26




Input (stdin)
3
3
1 2 3
4 5 6
7 8 9

Output (stdout)
7
8
9





Input (stdin)
3
2
1 2
33 22
22 100

Output (stdout)
33
100




*/


//Program


#include<iostream>
using namespace std;
int max(int a[],int n)
{
int i,max;
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}

int main()
{
int a[25][25],b[25],m,n,i,j;
cin>>m;
cin>>n;
  
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
  
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
b[j]=a[j][i];
cout<<max(b,m)<<"\n";
}
}
