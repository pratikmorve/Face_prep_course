/*


Matrix Addition
Raju has a square shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the element of a row into a column element and column element into a row element without altering the shape of the puzzle. Help raju to solve this puzzle. FUNCTIONAL REQUIREMENTS: int** createArray(int,int); int getElement(int**,int,int); int addMatrix(int**,int**,int**,int,int);
Input Format:

Enter the row and column of a matrix Enter the matrix

Output Format:

Addition of a matrix

Sample Input:

2

2

1

2

3

4

1

2

3

4

Sample Output:

2 4

6 8





Input (stdin)
2
2
1
2
4
5
3
6
7
8

Output (stdout)
4 8
11 13







Input (stdin)
2
2
1
3
4
6
0
9
8
7

Output (stdout)
1 12
12 13





Input (stdin)
4
4
1
2
3
4
1
2
3
4
1
2
3
4
1
2
3
4
1
2
3
4
1
2
3
4
1
2
3
4
1
2
3
4

Output (stdout)
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8




*/



//Program


#include<iostream>
using namespace std;
int main()
{
int row, col, m1[10][10], m2[10][10], sum[10][10];
cin>>row;
cin>>col;
for(int i=0;i<row;i++ ) 
{
for(int j=0;j<col;j++) 
{
cin>>m1[i][j];
}
}

for(int i=0;i<row;i++ ) 
{
for(int j=0;j<col;j++) 
{
cin>>m2[i][j];
}
}
  
for(int i=0;i<row;i++) 
{
for(int j=0;j<col;j++) 
{
sum[i][j]=m1[i][j]+m2[i][j];
cout<<sum[i][j]<<" ";
}
cout<<"\n";
}
  
return 0;
}
