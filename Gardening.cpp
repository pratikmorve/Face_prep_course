/*

Gardening
Dora is very much interested in gardening and she decides to plant more trees in her garden. She plants trees in the order of rows and columns. She numbered the trees in column wise order. She planted the mango trees only in the second column from both first and last. But later when the trees grew up, she forgot where she planted mango trees. So help her find out whether the given tree number is a number of mango trees or not. Display whether “It is a mango tree” or “It is not a mango tree”.
INPUT FORMAT:

Input consists of 3 integers.

First input corresponds to the number of rows.

Second input corresponds to the number of columns.

Third input corresponds to the tree number.



Input (stdin)
5
5
20

Output (stdout)
It is a mango tree


Input (stdin)
10
10
21

Output (stdout)
It is not a mango tree


Input (stdin)
11
11
22

Output (stdout)
It is a mango tree


*/


//Program

#include<iostream>
using namespace std;
int main()
{
int row,column,number;
cin>>row;
cin>>column;
cin>>number;
//int even=number%2==0;
//int odd=number%2!=0;
if(row%2!=0 && column%2!=0)
cout<<"It is a mango tree";
else
cout<<"It is not a mango tree";
}
