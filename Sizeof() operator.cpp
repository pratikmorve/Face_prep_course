/*

Sizeof() operator
Maya is interested to learn programming languages. When she is learning, she had a doubt on how to find the size of the variable. In C++, we have the sizeof() operator, which is used to get the size occupied by a variable or value. Now, write a C++ program to declare a variable of character, integer, float, and double type and print their respective sizes.
OUTPUT FORMAT:

Print the corresponding size of a character, integer, float and double.


Input (stdin)

Output (stdout)
1
4
4
8
*/

//Program

#include<iostream>
using namespace std;
int main()
{
int a;
char b;
float c;
double d;
std::cout<<sizeof(b);
std::cout<<"\n"<<sizeof(a);
std::cout<<"\n"<<sizeof(c);
std::cout<<"\n"<<sizeof(d);
}
