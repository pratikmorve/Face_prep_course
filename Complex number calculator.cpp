/*

Complex number calculator
Rajesh is appearing for techathon for the price money of 10K. They have a provided a platform where an incomplete code will appear, and they have to complete the full code. He got a program where he need to create a complex calculator. Can you please help Rajesh with this.
The first line consists of a choice which is an integer to choose from 1 to 3. Choice 1 represents addition of two complex numbers, 2 represents subtraction of two complex numbers and 3 represents the multiplication of two complex numbers.



Input (stdin)
3
5
8
6
-10

Output (stdout)
110-130i




Input (stdin)
2
65
565
15
-89

Output (stdout)
50+654i




Input (stdin)
4
15
25
-9
-89

Output (stdout)
Invalid choice


*/



//Program


#include<iostream>
#include<math.h>
using namespace std;
struct complex
{
float rel;
float img;
}s1,s2;

int main()
{
int choice;
float a,b;
cin>>choice;

switch(choice)
{
case 1:
if(choice==1)
{
cin>>s1.rel;
cin>>s1.img;
cin>>s2.rel;
cin>>s2.img;
//Addition
a=(s1.rel)+(s2.rel);
b=(s1.img)+(s2.img);
cout<<a<<"+"<<b<<"i";
  break;
}

case 2:
if(choice==2)
{
cin>>s1.rel;
cin>>s1.img;
cin>>s2.rel;
cin>>s2.img;
//Subtraction
a=(s1.rel)-(s2.rel);
b=(s1.img)-(s2.img);
cout<<a<<"+"<<b<<"i";
break;
}

case 3:
if(choice==3)
{
cin>>s1.rel;
cin>>s1.img;
cin>>s2.rel;
cin>>s2.img;
  
//Multiplication
a=((s1.rel)*(s2.rel))-((s1.img)*(s2.img));
b=((s1.img)*(s2.img))+((s1.rel)*(s2.img));
cout<<a<<b<<"i";
break;
}

default:
cout<<"Invalid choice";
}
}


