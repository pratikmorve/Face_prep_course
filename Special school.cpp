/*

Special school
A special school is run by an NGO for kids with Dyslexia. We all know these children will start writing the letters backward or in reverse. Once special care is taken to correct this issue and once they are introduced to words, they will start writing the words in the proper format. The teachers do not want to discourage the children at the start itself and they have decided to mark the words written in reverse also as correct. Can you please help the teacher in correcting the answer sheets by writing a C++ program? Write a C++ program to check whether the second word is the reverse of the first word. Do not use strrev() function.
Input Format:

Input consists of 2 strings. 

Assume that the maximum length of the string is 50.

Output format:

Refer sample input and output for formatting specifications.




Input (stdin)
Excellent
tnellecxE

Output (stdout)
It is correct




Input (stdin)
Excellent
tneilecxE

Output (stdout)
It is wrong



Input (stdin)
Bike
ekiB

Output (stdout)
It is correct


*/





//Program


#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char input[50];
  cin>>input;
  char rev[50];
  cin>>rev;
 int len = strlen(input);
  for(int i=0;i<len/2;i++){
  	swap(input[i],input[len-i-1]);
  }
  
  if(strcmp(input,rev)){
  cout<<"It is wrong";
  }else{
  cout<<"It is correct";
  }
}
