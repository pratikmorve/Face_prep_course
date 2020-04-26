/*

Counting
These days kids are introduced to computers at a very early age. The kids are taught about alphabets, digits and blank spaces. The teacher asked the students to count the vowels, consonants, digits and white spaces in a string. The teacher found it a bit difficult to evaluate these tests and she knew that the 12th class students are learning C programming. So she assigned this task to them to count the vowels, consonants, digits and white spaces in a string. Can you please help them out? Write a program to count the vowels, consonants, digits, white spaces, and symbols in a string.
Input &output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase and lowercase. Refer sample input and output for formatting specifications.




Input (stdin)
At 16 years of age, Sachin was supposed to face the likes of Wasim Akram and Waqar Younis.

Output (stdout)
Vowels:29
Consonants:40
White Spaces:17
Digits:2
Symbols:2




Input (stdin)
The main contribution by Sachin was the way he changed the opening in ODI cricket.

Output (stdout)
Vowels:25
Consonants:42
White Spaces:14
Digits:0
Symbols:1




Input (stdin)
Australia in those days was termed as the invincibles. Playing against Australia was always the toughest challenge that a batsman can face in those days.

Output (stdout)
Vowels:49
Consonants:78
White Spaces:24
Digits:0
Symbols:2




*/




//Program



#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[200];
    int i, vowels, consonants, digits, spaces, symbols;
    vowels = consonants = digits = spaces = symbols = 0;
    cin.getline(str, 200);

    for(i=0; str[i]!='\0'; ++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U')
        {
            ++vowels;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            ++consonants;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            ++digits;
        }
        else if (str[i]==' ')
        {
            ++spaces;
        }
        else
        {
            ++symbols;
        }
    }

    cout<<"Vowels:"<<vowels;
    cout<<"\nConsonants:"<<consonants;
    cout<<"\nWhite Spaces:"<<spaces;
    cout<<"\nDigits:"<<digits;
    cout<<"\nSymbols:"<<symbols;

    return 0;
}
