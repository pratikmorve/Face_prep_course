/*


Harshad Number
Write a C++ program to find whether the given number is a Harshad number or not. Note that Harshard number is an integer that is divisible by the sum of its digits.
INPUT & OUTPUT FORMAT:

Input consists of 1 integer. If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".


Input (stdin)
1729

Output (stdout)
Harshad Number


Input (stdin)
64

Output (stdout)
Not Harshad Number


Input (stdin)
1343

Output (stdout)
Not Harshad Number

*/


//Program



#include <iostream>
using namespace std;
int main()  
{  
int num,sum = 0;  
cin>>num;
int n = num;   
while(num > 0)
{  
int rem = num%10;  
sum = sum + rem;  
num = num/10;  
}      
if(n % sum == 0)  
cout<<"Harshad Number";  
else  
cout<<"Not Harshad Number";
return 0;  
}

