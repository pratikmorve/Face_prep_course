/*

Help Tia to extract decimals
Tia is new to programming. She needs to write a program which will receive the input as a floating point number. She needs to print the decimal part of the floating point of the number. She has written a few lines of code. Can you fill up the rest.
Read the input as string. Use string operations on the input to derive the answer easily.



Input (stdin)
-955.444

Output (stdout)
Floating part is : 444




Input (stdin)
5210.0

Output (stdout)
Floating part is : 0


*/



//Program


#include<iostream> 
#include<string> 
using namespace std;
int main() 
{ 
string number;   
cin>>number;
char delimiter = '.';
size_t pos = 0;
string token;
string dec;
pos = number.find(delimiter);
dec=number.substr(pos+1);
cout<<"Floating part is : "<<dec;
return 0; 
}
