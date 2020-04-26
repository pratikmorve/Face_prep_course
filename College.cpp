/*

College
Create a structure called College. struct College { char name[100]; char city[100]; int establishmentYear; float passPercentage; } Write a program to get the details of 'n' colleges and to display their details, sorted by name in ascending order.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places.

SAMPLE INPUT & OUTPUT:

Enter the number of colleges

3

Enter the details of college 1

Enter name

ACE

Enter city

Coimbatore

Enter year of establishment

2000

Enter pass percentage

98.5

Enter the details of college 2

Enter name

BCE

Enter city

Erode

Enter year of establishment

1990

Enter pass percentage

89.45

Enter the details of college 3

Enter name

DCE

Enter city

Chennai

Enter year of establishment

2008

Enter pass percentage

97.35

Details of colleges

College 1

Name : ACE

City : Coimbatore

Year of establishment : 2000

Pass percentage : 98.50

College 2

Name : BCE

City : Erode

Year of establishment : 1990

Pass percentage : 89.45

College 3

Name : DCE

City : Chennai

Year of establishment : 2008

Pass percentage : 97.35







Case 1



Input (stdin)
3
ACE
Coimbatore
2000
98.5
BCE
Erode
1990
89.45
DCE
Chennai
2008
97.35

Output (stdout)
Enter the number of colleges
Enter the details of college 1
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Enter the details of college 2
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Enter the details of college 3
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Details of colleges
College:1
Name:ACE
City:Coimbatore
Year of establishment:2000
Pass percentage:98.5
College:2
Name:BCE
City:Erode
Year of establishment:1990
Pass percentage:89.45
College:3
Name:DCE
City:Chennai
Year of establishment:2008
Pass percentage:97.35


*/




//Program


#include<iostream>
#include<string.h>
using namespace std;
struct College
{
char name[100]; 
char city[100]; 
int establishmentYear; 
float passPercentage;
}s[100];

int main()
{
struct College temp; 
int i,j,n;
cout<<"Enter the number of colleges\n";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"Enter the details of college "<<i<<"\n";
cout<<"Enter name\n";
cin>>s[i].name;
cout<<"Enter city\n";
cin>>s[i].city;
cout<<"Enter year of establishment\n";
cin>>s[i].establishmentYear;
cout<<"Enter pass percentage\n";
cin>>s[i].passPercentage;
}
  
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(s[i].name,s[j].name)>0)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
}  
cout<<"Details of colleges\n";
for(i=1;i<=n;i++)
{
cout<<"College:"<<i<<"\n";
cout<<"Name:"<<s[i].name<<"\n";
cout<<"City:"<<s[i].city<<"\n";
cout<<"Year of establishment:"<<s[i].establishmentYear<<"\n";
cout<<"Pass percentage:"<<s[i].passPercentage<<"\n";
}
return 0;
}
