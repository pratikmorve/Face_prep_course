/*

Pattern II
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15




Input (stdin)
5

Output (stdout)
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15





Input (stdin)
4

Output (stdout)
1
3*2
4*5*6
10*9*8*7




Input (stdin)
6

Output (stdout)
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
21*20*19*18*17*16



*/



//Program


#include <iostream> 
using namespace std; 
int main()
{ 
int j, k = 0,n;
cin>>n;
for (int i=1; i<=n; i++) 
{ 
if (i%2 != 0) 
{ 
for (j=k+1; j<k+i; j++) 
cout << j << "*"; 
cout << j++ << endl; 
k = j;	 
} 
else
{
k = k+i-1;
for (j=k; j>k-i+1; j--) 
cout << j << "*"; 
cout << j << endl;	 
} 
} 
} 
