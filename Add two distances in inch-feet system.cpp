/*

Add two distances in inch-feet system
Write a program to add two distances in inch feet system using Structure
INPUT FORMAT:

Input 1: Inch1 and feet1

Input 2 : Inch2 and feet2

OUTPUT FORMAT:

Sum of Distance

SAMPLE INPUT:

23

4.7

22

7.5

SAMPLE OUTPUT:

44'-6.7"





Input (stdin)
22
4.7
23
7.9

Output (stdout)
46'-0.6"




Input (stdin)
14
4.5
22
4.5

Output (stdout)
36'-9"




Input (stdin)
21
7.8
31
7.5

Output (stdout)
53'-3.3"

*/






//Program


#include <iostream>
using namespace std;
struct Distance{
    int feet;
    float inch;
};
int main()
{
Distance d1,d2,sum;
cin >> d1.feet;
cin >> d1.inch;
cin >> d2.feet;
cin >> d2.inch;
sum.feet = d1.feet+d2.feet;
sum.inch = d1.inch+d2.inch;
if(sum.inch>12.0) 
{
sum.inch = sum.inch-12.0;
++sum.feet;
}
cout<<sum.feet<<"'-"<<sum.inch<<"\"";
return 0;
}

