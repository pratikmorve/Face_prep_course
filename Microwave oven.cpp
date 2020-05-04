/*

Microwave oven
A microwave oven manufacturer recommends to increase the heating time by 50% when two items are heated and to double the heating time when three items are heated. Heating more than three items at once is not recommended. Now, write a program to find out the recommended heating time.
INPUT FORMAT:

The first input is an integer which denotes the number of items

The second input is a floating point number which denotes the single item heating time.

OUTPUT FORMAT:

Print the recommended heating time in floating point with 2 decimal places.

If the number of items is more than three, print "Number of items is more".

Refer the sample output for formatting.



Input (stdin)
3
5.0

Output (stdout)
10.00


Input (stdin)
2
7.0

Output (stdout)
10.50


Input (stdin)
3
10.0

Output (stdout)
20.00


*/




//Program


#include<iostream>
using namespace std;
int main()
{
int no_of_items;
float heating_time,result;
cin>>no_of_items;
cin>>heating_time;
if(no_of_items<=2)
{
result=(heating_time+heating_time/2);
cout<<result;
}
else if(no_of_items==3)
{
result=(heating_time*2);
cout<<result;
}
else
{
cout<<"Number of items is more";
}
}
