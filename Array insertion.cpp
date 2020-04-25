/*

Array insertion
Arun and Ram were playing cards. Arun has 5 cards. Ram wants to insert a new card in between Arun's cards. Ram wants to find the position to insert the card. So help him to find the position to insert a certain card. If Ram inserts a card in a position other than the position of 5 cards, the game will be over. So play carefully. EXAMPLE: For example, consider an array having three elements in it initially and a[0] = 1, a[1] = 2 and a[2] = 3 and you want to insert a number 45 at location 1 i.e. a[0] = 45, so we have to move elements one step below after insertion a[1] = 1 , and a[2] = 2 and a[3] = 3.
Input & Output Format:

Assume that the maximum number of elements in the array is 20.



Input (stdin)
5
1
2
3
4
5
4
10

Output (stdout)
Enter the number of elements in the array
Enter the elements in the array
Enter the location where you wish to insert an element
Enter the value to insert
Array after insertion is
1
2
3
10
4
5




Input (stdin)
4
1
2
3
4
8

Output (stdout)
Enter the number of elements in the array
Enter the elements in the array
Enter the location where you wish to insert an element
Invalid Input




Input (stdin)
2
1
2
1
4

Output (stdout)
Enter the number of elements in the array
Enter the elements in the array
Enter the location where you wish to insert an element
Enter the value to insert
Array after insertion is
4
1
2



*/




//Program


#include<iostream>
using namespace std; 
int main()
{
int i,a[50],no,pos,size;
cout<<"Enter the number of elements in the array\n";
cin>>size;
cout<<"Enter the elements in the array\n";
for(i=0; i<size; i++)
{
cin>>a[i];
}
cout<<"Enter the location where you wish to insert an element\n";
cin>>pos;
if(pos>size)
{
cout<<"Invalid Input\n";
}
else
{
cout<<"Enter the value to insert\n";
cin>>no;
--pos; 
for(i=size;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=no; 
cout<<"Array after insertion is\n"; 
for(i=0;i<size+1;i++)
{
cout<<a[i]<<"\n";
}
}
return 0; 
}
