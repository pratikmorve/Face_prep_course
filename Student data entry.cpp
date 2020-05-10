/*

Student data entry
It is the first day in school. The kids need to enroll their data in system. Teacher calls one by one to enter the data. They need to enter their data and need to check the display their details.
[Hint : use structure to store the details of student]



Input (stdin)
Christy Rose
57
82

Output (stdout)

Student Details
Name: Christy Rose
Roll: 57
Marks: 82




Input (stdin)
Akalya Devi
40
88

Output (stdout)

Student Details
Name: Akalya Devi
Roll: 40
Marks: 88




Input (stdin)
Sadhwanie K
85
80

Output (stdout)

Student Details
Name: Sadhwanie K
Roll: 85
Marks: 80

*/


//Program


#include<iostream>
#include<string.h>
using namespace std;
struct student
{
char name[30];
int roll;
float marks;
};

int main() 
{
struct student s1;
cin.getline(s1.name,30);
cin>>s1.roll;
cin>>s1.marks;
cout<<"\nStudent Details";
cout<<"\nName: "<<s1.name;
cout<<"\nRoll: "<<s1.roll;
cout<<"\nMarks: "<<s1.marks;

return 0;
}

