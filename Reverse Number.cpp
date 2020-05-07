/*

Reverse Number
Need to design a program wherein when the human enters an integer, the computer should return an integer in the reversed manner. Write a program to calculate the reverse of the given number.
Note: Take care of the leading zeros (e.g. 5200 gives 25). It means reversed number never has any trailing zeros.

Sample Input:

4235

Sample Output:

5324




Input (stdin)
678

Output (stdout)
876



Input (stdin)
54321

Output (stdout)
12345



Input (stdin)
43567

Output (stdout)
76534


*/




//Program


#include <iostream> 
using namespace std;
int main()
{ 
int num,rev = 0;
cin>>num;
while(num > 0) 
{ 
  rev = rev*10 + num%10; 
  num = num/10; 
} 
cout<<rev;
return 0; 
}   
