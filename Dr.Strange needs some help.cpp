/*

Dr.Strange needs some help
Dr. Strange has an experimental laboratory in a mysterious enclave. He is conducting an experiment to strange genes which will make him the most powerful sorcerer in the existence . He needs to create particular amount of bacteria. The bacteria multiplies exponentially. If he lets m bacteria to multiply n exponential times, he should check whether he will get the required amount of bacteria.
Input consists of three inputs. The no. of bacteria, m. The number in which it gets multiplied, n. The required number, req .



Input (stdin)
2
3
7

Output (stdout)
Doctor, you can proceed with your experiment.




Input (stdin)
2
3
9

Output (stdout)
Sorry Doctor! You need more bacteria.




Input (stdin)
2
3
8

Output (stdout)
Doctor, you can proceed with your experiment.

*/



//Program



#include<iostream>
using namespace std;
int main()
{
  int m,n,req;
  cin>>m;
  cin>>n;
  cin>>req;
int result=m*n;
if(req-result>2)
{
  cout<<"Sorry Doctor! You need more bacteria.";
}
  else
  {
    cout<<"Doctor, you can proceed with your experiment.";
  }
}
