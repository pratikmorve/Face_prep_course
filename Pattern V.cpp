/*


Pattern V
Write a program to print the trapezium pattern.
Sample Input:

4

Sample Output:

1*2*3*4*17*18*19*20 
--5*6*7*14*15*16
----8*9*12*13
------10*11





Input (stdin)
4

Output (stdout)
1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11




Input (stdin)
5

Output (stdout)
1*2*3*4*5*26*27*28*29*30
--6*7*8*9*22*23*24*25
----10*11*12*19*20*21
------13*14*17*18
--------15*16




Input (stdin)
3

Output (stdout)
1*2*3*10*11*12
--4*5*8*9
----6*7


*/



//Program


#include<iostream>
using namespace std;
int main(){
int n,num=1,i=1,space=0,k=1;
cin>>n;
int number=n;
for(i=0;i<n;i++)
{
for(int j=1;j<=space;j++)
{
cout<<"-";
}
for(int m=1;m<2*n-space;m++)
{
if(m%2==0)
cout<<"*";
else
cout<<num++;
}
cout<<"*";
for(int l=1;l<2*n-space;l++)
{
if(l%2==0)
cout<<"*";
else
{
cout<<k+number*number;
k++;
}
}
number--;
space=space+2;
cout<<"\n";
}
return 0;
}
