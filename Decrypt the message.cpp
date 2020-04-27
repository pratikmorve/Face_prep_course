/*

Decrypt the message
The terrorist hijacked the famous Taj hotel in Mumbai and it has many VIPs, children, and family members. The hotel manager decides to inform the police but he wants to send the message without the knowledge of terrorists. So, he sends the message in the form of an encrypted number. Unfortunately, the message is received by the terrorist. The terrorist has to enter the number if they want to read the message. If the resultant of adding the encrypted number and number entered by a terrorist is a perfect number, then they can read the message. Otherwise, they can't read the message.
A perfect number is a number which is equal to the sum of its proper positive divisors, excluding the number itself.

Input Format:

The first input contains an integer which denotes the encrypted number

The second input contains an integer which denotes the number entered by a terrorist

Output Format:

If the resultant of adding the encrypted number and number entered by a terrorist is a perfect number, then print "They can read the message". Otherwise, print "They can't read the message".

Sample Input:

3

3

Sample Output:

They can read the message

Explanation:

6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.





Input (stdin)
3
3

Output (stdout)
They can read the message




Input (stdin)
12
10

Output (stdout)
They can't read the message




Input (stdin)
12
16

Output (stdout)
They can read the message



*/



//Program


#include<iostream>
using namespace std;
int main(){
int number;
  int code;
  cin>>number;
  cin>>code;
  int sum_of_numbers=  number+code;
  int i=1;
  int sum = 0;
  while(i < (sum_of_numbers)){
  	if(sum_of_numbers % i == 0){
     sum += i; 
    }
    i++;
  }
  if(sum == sum_of_numbers){
  cout<<"They can read the message";
  }else{
    cout<<"They can't read the message";
  }
}
