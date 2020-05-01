/*

Highest mark in the class
The teacher who handles science for 3rd-standard class distributes the mark sheets to her students, she needs to find the highest mark among the "n" students. Help the teacher to find the maximum mark.
?Input Format:

The first input contains an integer 'n' which denotes the number of students

The remaining input denotes mark of 'n' students separated by spaces

Output Format:

Print the highest mark

Sample Input:

5

45 67 89 34 22

Sample Output:

89






Input (stdin)
7
34 23 14 56 78 32 94

Output (stdout)
94




Input (stdin)
10
98 76 54 34 100 342 678 897 564 21

Output (stdout)
897




Input (stdin)
3
567 907 231

Output (stdout)
907


*/




//Program


#include<iostream>
using namespace std;
int main()
{
int n,i,largest;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
  cin>>a[i];
}
largest=a[0];
for(i=0;i<n;i++)
{
if(a[i]>largest)
largest=a[i];
}
cout<<largest;
}
 
  
