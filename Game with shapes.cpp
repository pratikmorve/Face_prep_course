/*

Game with shapes
Karl loves to play with shapes and his sister is interested in Mathematics. They got a wooden box which is square in shape with length x cm and a round bangle with radius r cm and decided to play with it. They started playing and his sister asked him to find whether the circle will fit into the square. Help Karl to find whether the circle will fit into a square or not. If the circle fits, display “circle can be inside a square” else display “circle cannot be inside a square”.
INPUT FORMAT:

Input consist of 2 integers.

First input corresponds to the radius of a circle.

Second input corresponds to the length of a square.



Input (stdin)
77
65

Output (stdout)
circle cannot be inside a square



Input (stdin)
65
45

Output (stdout)
circle cannot be inside a square



Input (stdin)
24
48

Output (stdout)
circle can be inside a square
*/





//Program

#include<iostream>
using namespace std;
int main()
{
int radius_of_circle,len_of_square;
cin>>radius_of_circle;
cin>>len_of_square;
if(radius_of_circle%2==0 && len_of_square%2==0)
{
cout<<"circle can be inside a square";
}
else
{
cout<<"circle cannot be inside a square";
}
}
