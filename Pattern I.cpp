/*

Pattern I
Write a program to print the following pattern.
Sample Input:

3

Sample Output:

3 
44 
555 
6666 
6666 
555 
44 
3




Input (stdin)
3

Output (stdout)
3
44
555
6666
6666
555
44
3




Input (stdin)
4

Output (stdout)
4
55
666
7777
7777
666
55
4




Input (stdin)
5

Output (stdout)
5
66
777
8888
8888
777
66
5


*/



//Program


#include <iostream>

using namespace std;

int main()

{
    int i, j, k, n, count = 0;
    cin >> n;
    
    for (int i = 0; i <= 3; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << i + n;
        }
        cout << endl;
    }
    for (int i = 3; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            cout << i+n;
        }
        cout << endl;
    }
    return 0;
}
