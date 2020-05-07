/*

Remove
In a certain area, there was a camp of polio drops team. They need to search for every baby in a particular area. They want to find the baby and take out the baby for polio drops. Help them to find the baby to avoid polio attacks. (remove the occurrence of the word "the" from the entered string).
Input Format:

The input is a string.

Text that is bold represents the input.

Output Format:

The output is a string.

Sample Input:

remove the occurrence of the word from entered string

Sample Output:

remove occurrence of word from entered string




Input (stdin)
remove the occurrence of the word from entered string

Output (stdout)
remove occurrence of word from entered string



*/




//Program


#include <iostream>
#include <string>

using namespace std;

void eraseAllSubStr(string str,string replace)
{
  size_t pos = std::string::npos;
 
  while ((pos  = str.find(replace) )!= std::string::npos)
  {
    str.erase(pos, replace.length());
  }
  
  for(int i=str.size()-1; i >= 0; i-- )
    {
        if(str[i]==' '&&str[i]==str[i-1])
        {
            str.erase( str.begin() + i );
        }
    }
  cout<<str;
}
 
int main()
{
  string str="remove the occurrence of the word from entered string";
  eraseAllSubStr(str, "the");
  return 0;
}
