/*

Encrypt using Armstrong number
Nowadays, we use social media a lot. We usually send messages, pictures, etc to each other. So, encrypting and decrypting should be done properly to avoid hacking. Irin is developing a program for the same where color encrypting is done with the help of Armstrong numbers. Can you help Irin to write program to check whether a number is an Armstrong number or not.



Input (stdin)
153

Output (stdout)
Kindly proceed with encrypting




Input (stdin)
154

Output (stdout)
It is not an Armstrong number




Input (stdin)
1634

Output (stdout)
Kindly proceed with encrypting


*/




//Program


 #include<iostream> 
using namespace std; 
int power(int x, unsigned int y) 
{ 
	if( y == 0) 
		return 1; 
	if (y%2 == 0) 
		return power(x, y/2)*power(x, y/2); 
	return x*power(x, y/2)*power(x, y/2); 
} 
int order(int x) 
{ 
	int n = 0; 
	while (x) 
	{ 
		n++; 
		x = x/10; 
	} 
	return n; 
} 
bool isArmstrong(int x) 
{  
	int n = order(x); 
	int temp = x, sum = 0; 
	while (temp) 
	{ 
		int r = temp%10; 
		sum += power(r, n); 
		temp = temp/10; 
	} 
	return (sum == x); 
} 
int main() 
{ 
	int x;
   cin>>x;
  if(isArmstrong(x)==1)
  {
  cout <<"Kindly proceed with encrypting";
  }
  else
  {
    cout<<"It is not an Armstrong number";
  }
	return 0; 
} 

