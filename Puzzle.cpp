/*

Puzzle
Raju has a square-shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the elements of a row into a column element and column element into a row element. Help Raju to solve this puzzle.
Input Format:

The first input contains an integer 'r' which denotes the number of rows in puzzle

The second input contains an integer 'c' which denotes the number of columns in puzzle

The remaining input denotes the numbers on square shaped puzzle

Output Format:

Print the solved puzzle

Sample Input:

2

2

2 3

4 5

Sample Output:

2 4

3 5






Input (stdin)
2
3
1 2 3
4 5 6

Output (stdout)
1 4
2 5
3 6





Input (stdin)
3
3
5 6 8
1 4 7
2 1 4

Output (stdout)
5 1 2
6 4 1
8 7 4





Input (stdin)
2
2
3 4
6 7

Output (stdout)
3 6
4 7

*/




//Program

#include<iostream>
using namespace std;
int main()
{
int matrix[5][5],transpose_matrix[5][5];
int i,j,rows,cols;
cin>>rows;
cin>>cols;
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
cin>>matrix[i][j];
}
}      
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
transpose_matrix[j][i]=matrix[i][j];
}
}
for(i=0;i<cols;i++)
{
for(j=0;j<rows;j++)
{
cout<<transpose_matrix[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
