/*

Time sheet
Jeevitha just started to work as a programming trainer for UIT's Placement Cell. She is paid Rs.100 an hour, with a few exceptions. She earns an extra Rs.15 an hour for any part of a day where she works for more than 8 hours, and an extra Rs.25 an hour for hours beyond 40 in any one week. Also, she earns a 25% bonus for working on Saturdays and a 50% bonus for working on Sundays. The bonuses for Saturday and Sunday are computed based on the hours worked on those days. And there is no bonus for working more than 40 hours in a week. You'll be given the number of hours Jeevitha worked on each day in a week (Sunday, Monday, ..., Saturday), and you need to compute her salary for the week.
INPUT & OUTPUT FORMAT:

Input consists of 7 integers less than or equal to 24 on separate lines

Print Jeevith's salary for a week.


Input (stdin)
0
8
8
8
10
6
0

Output (stdout)
4030


Input (stdin)
4
5
0
8
0
6
0

Output (stdout)
2500



Input (stdin)
4
0
0
0
0
6
0

Output (stdout)
1200

*/



//Program


#include<iostream>
using namespace std;
int main()
{
	int s[7],t=0,sum=0;
  	for(int i=0;i<7;i++)
    {
    	cin>>s[i];
      	t += s[i];
    }
  	t=t-s[0]-s[6];
  	for(int i=1;i<6;i++)
    {
    	if(s[i]<=8)
          sum += s[i]*100;
      	else
          sum += s[i]*100+(s[i]-8)*15;
    }
  
  sum += s[0]*150;
  sum += s[6]*125;
  
  if(t>40)
  {
  	sum+=(t-40)*25;
  }
  cout<<sum;
 }
