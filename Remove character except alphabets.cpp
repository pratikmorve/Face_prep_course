/*

Remove character except alphabets
In a blind organization, they were playing the typing a keyword game and they want to correct the form of the word. So help them to by writing a program to remove all special symbols and print the characters of a string.
Input & output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase, lowercase, and symbols.



Input (stdin)
Code&^L5AB

Output (stdout)
CodeLAB



Input (stdin)
Fresh214&grad

Output (stdout)
Freshgrad



Input (stdin)
BI*0^KE

Output (stdout)
BIKE



*/




//Program



#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char input[200];
    int i, j;
    cin >> input;
    for(i = 0; input[i] != '\0'; ++i)
    {
        while (!( (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || input[i] == '\0') )
        {
            for(j = i; input[j] != '\0'; ++j)
            {
                input[j] = input[j+1];
            }
            input[j] = '\0';
        }
    }
    cout<<input;
}


