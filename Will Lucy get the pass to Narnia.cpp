/*

Will Lucy get the pass to Narnia
Lucy has entered to Narnia through the wardrobe. Once she enters to Narnia, she is encountered with a genie. Genie takes care of Narnia from trespassers. As Genie finds Lucy to be genuine, Genie allows Lucy to enter Narnia if she answers his question. He gives Lucy two numbers and asks her to perform the basic arithmetic operation like addition, subtraction etc. She need to perform the same and tell the answer. If she tells right answer, she gets the pass to Narnia.
The input should consists of two integers and the operation to be performed which should be corresponding integer. Print the Menu as

Addition(+)
Subtraction(-)
Multiplication(*)
Division(/)
Remainder(%)



Input (stdin)
25
45
1

Output (stdout)
Enter first number : Enter second number : Menu
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Remainder
70





Input (stdin)
54
80
2

Output (stdout)
Enter first number : Enter second number : Menu
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Remainder
-26




Input (stdin)
50
25
6

Output (stdout)
Enter first number : Enter second number : Menu
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Remainder
Invalid operation


*/




//Program


#include<iostream>
using namespace std;
int main()
{
int a,b,choice;
cin>>a;
cin>>b;
cin>>choice;
cout<<"Enter first number : Enter second number : Menu";
cout<<"\n1.Addition"<<"\n2.Subtraction"<<"\n3.Multiplication"<<"\n4.Division"<<"\n5.Remainder";
switch(choice)
  {
  case 1:
         if(choice ==1)
         cout<<"\n"<<a+b;
         break;
  case 2:
         if(choice ==2)
         cout<<"\n"<<a-b;
          break;
  case 3:
         if(choice ==3)         
         cout<<"\n"<<a*b;
          break;
  case 4:
         if(choice ==4)
         cout<<"\n"<<a/b;
          break;
  case 5:
         if(choice ==5)
         cout<<"\n"<<a%b;
          break;                  

  default:
          if(choice>5)
          cout<<"\nInvalid operation";
           break;
  }
}
