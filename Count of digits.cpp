/*

Count of digits
Sara is studying in 2nd standard and she has to play event in her school. The number is displayed on the screen and she has to count the number of digits in the displayed number. Can you help her by writing the program for the above scenario?
Input Format:

The input consist of an integer

Output Format:

Print the number of digits in the given number

Sample Input:

1234

Sample Output:

4




Input (stdin)
4567

Output (stdout)
4



Input (stdin)
5679089754

Output (stdout)
10



Input (stdin)
65231456

Output (stdout)
8

*/




//Program


#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
int num,i=0;
cin>>num;
do
{
num=num/10;
i++;
}while(num>0);
cout<<i;
return 0;
}

