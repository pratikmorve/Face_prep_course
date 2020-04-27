/*

Electricity Bill
Electricity board has decided to charge rupees based on the units consumed by a particular home. If the units consumed is less than or equal to 200, the cost for one unit is 0.5. If the unit is less than or equal to 400, the cost for one unit is 0.65 and Rs.100 extra charge. If the unit is less than or equal to 600, the cost for one unit is 0.80 and Rs.200 extra charge. If the unit is greater than 600 the cost for one unit is 1.25 and Rs.425 extra charge. You need to now calculate the electricity bill based on the units consumed (given input).
INPUT & OUTPUT FORMAT:

Input consists of one integer.

This corresponds to the units consumed.

The output consists of one integer.

This corresponds to the electricity bill in rupees.


Input (stdin)
200

Output (stdout)
Rs.100



Input (stdin)
100

Output (stdout)
Rs.50


Input (stdin)
65

Output (stdout)
Rs.32
*/


//Program

#include<iostream>
using namespace std;
int main()
{
int units,rupees;
cin>>units;
if(units<=200)
{
rupees=units*0.5;
cout<<"Rs."<<rupees;
}
else if(units<=400)
{
rupees=(units*(0.65+100));
cout<<"Rs."<<rupees;
}
else if(units<=600)
{
rupees=(units*(0.80+200));
cout<<"Rs."<<rupees;
}
else if(units>600)
{
rupees=(units*(1.25+425));
cout<<"Rs."<<rupees;
}
}

  
