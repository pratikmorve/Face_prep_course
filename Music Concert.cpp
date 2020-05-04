/*

Music Concert
Sid Sriram's concert is going to happen by this week. Event coordinators have sold all tickets, odd number tickets are given to males and even number tickets are given to females. Finally, they need a count of males and females to allocate seats separately in the auditorium.
Note: Use dynamic memory allocation

Input Format:

The first input contains an integer which denotes the total number of tickets

The remaining 'n' input denotes the ticket numbers

Output Format:

Print the count of male

Print the count of female

Sample Input:

5

67 89 34 56 33

Sample Output:

3

2





Input (stdin)
6
34 5 6 23 14 25 

Output (stdout)
3
3



Input (stdin)
8
56 74 89 79 34 57 90 87

Output (stdout)
4
4




Input (stdin)
10
6 45 37 89 46 32 44 98 54 21 

Output (stdout)
4
6


*/



//Program


#include<iostream>
using namespace std;
int main()
{
int n,i,a[20];
int male_Count = 0, female_Count = 0;
cin>>n;
 for(i=0;i<n;i++)
{
cin>>a[i];
}  
for(i=0;i<n;i++)
{
if(a[i] % 2 == 0)
{
female_Count++;
}
else
{
male_Count++;
}
}  
cout<<male_Count;
cout<<"\n"<<female_Count;
return 0;
}
