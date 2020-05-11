/*

Treasure Finder
Lucy and Tina are close friends. They both are studying in the same school. Now they are on their summer vacation. As they are bored, they ask their parents to take them to an exhibition. There Lucy and Tina play a game. In this game, there are three boxes with some number written on their top. There is a treasure in one of the three boxes and the treasure is present in the box with the second largest number on its top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number which divides all the three given numbers. So, now help Lucy and Tina to decode the code.
INPUT FORMAT:

Input consists of three integers. First input corresponds to the number of the first box. Second input corresponds to the number of the second box. Third input corresponds to the number of the third box.




Input (stdin)
2
4
6

Output (stdout)
The treasure is in box which has number 4
The code to open the box is 2



Input (stdin)
7
5
6

Output (stdout)
The treasure is in box which has number 6
The code to open the box is 1




Input (stdin)
3
84
15

Output (stdout)
The treasure is in box which has number 15
The code to open the box is 3

*/







//Programs


#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3,rem;
cin>>n1;
cin>>n2;
cin>>n3;
int numbers[3] = {n1,n2,n3};
  
for(int i=0;i<3;i++){
   for(int j = i+1; j<3; j++)
   {
      if(numbers[j] < numbers[i]) {
       int  temp =numbers[i];
         numbers [i] =numbers[j];
         numbers [j] = temp;
      }
   }
}
cout<<"The treasure is in box which has number "<<numbers[1];
  
  int divisible_by;
  for(int i=1; i<=numbers[0]; i++){
  	if((( numbers[0] % i) == 0) && (( numbers[1] % i) == 0) && (( numbers[2] % i) == 0)){
    	divisible_by=i;
    }
  }
  cout<<"\nThe code to open the box is "<<divisible_by;
}
