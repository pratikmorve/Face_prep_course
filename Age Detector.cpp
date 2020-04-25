/*

Age Detector
Ask a user for his/her birth year encoded as two digits (like "62") and for the current year, also encoded as two digits (like "99"). Write a program to find the users current age in years.
INPUT FORMAT:

Input consists of 2 integers.

The first integer corresponds to the last 2 digits of the birth year.

The second integer corresponds to the last 2 digits of the current year.

OUTPUT FORMAT:

Print the user's current age.

Refer below sample output for formatting.


Input (stdin)
62
00

Output (stdout)
38


Input (stdin)
01
07

Output (stdout)
6


Input (stdin)
80
32

Output (stdout)
52

*/


//Program

#include<iostream>
using namespace std;
int main()
{
  int birth_year , current_year;
  cin>>birth_year;
  cin>>current_year;
 if(current_year < birth_year)
 {
	cout<<(100 - birth_year)+current_year;
 }
  else
  {
 	cout<<current_year-birth_year;  
 }
}
