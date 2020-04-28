/*

Greatest sum
Seenu have a fruit shop. He is arranged the some set of fruits are column and row wise. Seenu needs to find which row and column has maximum number of fruits. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 6 8

2 5 1

3 8 2

Sum of rows is 15 8 13

Row 1 has maximum sum

Sum of columns is 6 19 11

Column 2 has maximum sum






Input (stdin)
2
2
5 7
9 7

Output (stdout)
Sum of rows is 12 16
Row 2 has maximum sum
Sum of columns is 14 14
Column 1 has maximum sum





Input (stdin)
3
3
1 2 3
4 5 6
7 8 9

Output (stdout)
Sum of rows is 6 15 24
Row 3 has maximum sum
Sum of columns is 12 15 18
Column 3 has maximum sum





Input (stdin)
3
3
4 5 6
9 8 7
2 3 1

Output (stdout)
Sum of rows is 15 24 6
Row 2 has maximum sum
Sum of columns is 15 16 14
Column 2 has maximum sum

*/



//Program



#include<iostream>
using namespace std;
int main()
{
  int r,c;
  cin>>r>>c;
  int a[r][c];
  int maxr[r];
  int maxc[c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        cin>>a[i][j];
      }
    }
  int mr=0;
   for(int i=0;i<r;i++){
     maxr[mr]=maxc[mr]=0;
      for(int j=0;j<c;j++){
        maxr[mr] += a[i][j];
        maxc[mr] += a[j][i];
      }
     mr++;
    }
  int maxrow=0,maxcol=0;
  cout<<"Sum of rows is ";
  for(int i=0;i<mr;i++)
  {
     if(maxr[maxrow]<maxr[i])
       maxrow=i;
     
    if(maxc[maxcol]<maxc[i])
      maxcol =i;
    
    cout<<maxr[i]<<" ";
  }
  
  cout<<"\nRow "<<maxrow+1<<" has maximum sum";
  cout<<"\nSum of columns is ";
  for(int i=0;i<mr;i++)
  {
    cout<<maxc[i]<<" ";
  }
    cout<<"\nColumn "<<maxcol+1<<" has maximum sum";
 
  
   }
