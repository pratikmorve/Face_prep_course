/*

Vicky's birthday
Vicky's birthday is on February 29th. He can only celebrate his birthdays in leap year. Can you help Vicky to determine whether he can celebrate his birthday in the year mentioned by him.
Input should be an integer. (Usage : nested if)



Input (stdin)
1996

Output (stdout)
Vicky can celebrate his birthday.



Input (stdin)
2004

Output (stdout)
Vicky can celebrate his birthday.



Input (stdin)
1995

Output (stdout)
Vicky can't celebrate.


*/




//Program


#include<iostream>
using namespace std;
#include<iostream>
int main() { 
int year;
std::cin>>year;  
if(year%400==0)
{
  std::cout<<"Vicky can celebrate his birthday.";
}
else if(year % 100 == 0)
{
   std::cout<<"Vicky can't celebrate.";
 }
else if(year % 4 == 0)
{
  std::cout<<"Vicky can celebrate his birthday.";
}
else
{
  std::cout<<"Vicky can't celebrate.";
}
}

  
    
