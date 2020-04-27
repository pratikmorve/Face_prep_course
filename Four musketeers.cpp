/*

Four musketeers
'Artagnan joined the group of 3 Musketeers and now their group is called four Musketeers. Meanwhile, d'Artagnan also moved to a new house in the same locality nearby to the other three. Currently, the houses of Athos, Porthos and Aramis are located in the shape of a triangle. When the three musketeers asked d'Artagnan about the location of his house, he said that his house is equidistant from the houses of the other 3. Can you please help them find out the location of the house? Given the 3 locations {(x1,y1), (x2,y2) and (x3,y3)} of a triangle, write a program to determine the point which is equidistant from all the 3 points.
INPUT FORMAT:

Input consists of 6 integers.

The first integer corresponds to x1.

The second integer corresponds to y1.

The third and fourth integers correspond to x2 and y2 respectively.

The fifth and sixth integers correspond to x3 and y3 respectively.

OUTPUT FORMAT:

The output consists of two floating point numbers which correspond to the location of the house.


Input (stdin)
2
4
10
15
5
8

Output (stdout)
5.66667
9


Input (stdin)
4
3
33
12
1
2

Output (stdout)
12.6667
5.66667


Input (stdin)
2
2
3
4
5
6

Output (stdout)
3.33333
4
*/



//Program

#include<iostream>

using namespace std;
int main()
{
float x,y;
int x1,y1,x2,y2,x3,y3;
std::cin>>x1;
std::cin>>y1;
std::cin>>x2;
std::cin>>y2;
std::cin>>x3;
std::cin>>y3;
x=(x1+x2+x3)/3.0;
std::cout<<x;
y=(y1+y2+y3)/3.0;
std::cout<<"\n"<<y;  
}
