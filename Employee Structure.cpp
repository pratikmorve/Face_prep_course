/*

Employee Structure
Write a C++ program to create a structure called employee with name, employee id, name, age designation and salary as data members. Accept employee details and display it.
SAMPLE INPUT & OUTPUT:

Enter name:

Rajarajan

Enter ID:

001

Enter age:

24

Enter designation:

Manager

Enter Salary:

20000



Employee Details

Name of the Employee : Rajarajan 

ID of the Employee : 1 

Age of the Employee : 24 

Designation of the Employee : Manager 

Salary of the Employee : 20000.00 







Case 1


Input (stdin)
Rajarajan
1
24
Manager
20000

Output (stdout)
Enter name:
Enter ID:
Enter age:
Enter designation:
Enter Salary:
Employee Details
Name of the Employee : Rajarajan
ID of the Employee : 1
Age of the Employee : 24
Designation of the Employee : Manager
Salary of the Employee : 20000

*/




//Program



#include<iostream>
using namespace std;
 
struct Employee {
    char name[50];
    int id;
    int age;
    char designation[50];
    float salary;
};
 
int main() {
    Employee e;
   
    cout<<"Enter name:";
    cin.getline(e.name, 50);
    cout<<"\nEnter ID:";
    cin>>e.id;
    cout<<"\nEnter age:";
    cin>>e.age;
    cout<<"\nEnter designation:";
    cin>>e.designation;
    cout<<"\nEnter Salary:";
     cin>>e.salary;
     
   
    cout<<"\nEmployee Details";
    cout<<"\nName of the Employee : "<<e.name;
    cout<<"\nID of the Employee : "<<e.id;
    cout<<"\nAge of the Employee : "<<e.age;
    cout<<"\nDesignation of the Employee : "<<e.designation;
    cout<<"\nSalary of the Employee : "<<e.salary;
    return 0;
}
