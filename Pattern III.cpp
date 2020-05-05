/*


Pattern III
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1 
2*2 
3*3*3 
4*4*4*4 
5*5*5*5*5 
5*5*5*5*5 
4*4*4*4 
3*3*3 
2*2 
1





Input (stdin)
5

Output (stdout)
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1




Input (stdin)
4

Output (stdout)
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1




Input (stdin)
3

Output (stdout)
1
2*2
3*3*3
3*3*3
2*2
1



*/



//Program


#include <iostream>

using namespace std;

int main()

{
    int i, j, k, n, count = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 0; j < i; j++)
        {
            cout << i;
            if (k < i)
            {
                cout << "*";
                k = k + 1;
            }
        }
        cout <<"\n";
    }
    for (i = n; i > 0; i--)
    {
        k = 1;
        for (j = 0; j < i; j++)
        {
            cout << i;
            if (k < i)
            {
                cout << "*";
                k = k + 1;
            }
        }
        cout <<"\n";
    }
    return 0;
}
