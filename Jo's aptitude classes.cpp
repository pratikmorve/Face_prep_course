/*


Jo's aptitude classes
Jo is an aptitude trainer. She takes classes for college students for placements. She teaches students to find out highest common factor of three numbers. She has given homework for them to find out the same. Kindly help her to check whether their answers are correct or not.




Input (stdin)
15
30
90
15

Output (stdout)
Answer is correct.




Input (stdin)
2
4
6
2

Output (stdout)
Answer is correct.




Input (stdin)
1
2
3
3

Output (stdout)
Answer is wrong.


*/




//Program


#include <iostream>
using namespace std;

int main()
{
  int n1,n2,n3,apx_gcd;

  cin>>n1;
  cin>>n2;
  cin>>n3;
  cin>>apx_gcd;
  int smallest= n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
  int gcd;
  for(int i=1; i<=smallest; i++){
  if((n1 % i == 0 ) && (n2 % i == 0 ) && (n3 % i == 0 )){
    gcd = i;
  }
}

  string ans = (gcd == apx_gcd) ? "Answer is correct." : "Answer is wrong.";
  cout<<ans;
  return 0;
}
