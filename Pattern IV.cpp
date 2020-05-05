/*

Pattern IV
Write a program to print the given below pattern.
Sample Input:

5

Sample Output:

11112
32222
33334
54444
55556




Input (stdin)
5

Output (stdout)
11112
32222
33334
54444
55556




Input (stdin)
3

Output (stdout)
112
322
334



Input (stdin)
2

Output (stdout)
12
32



*/


//Program


#include <iostream>

using namespace std;

int main()

{
    int i, j, k, n, count = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if(i % 2 == 0){
             
             if(j == 1){
                cout << i + 1;
             }else{
                 cout << i;
             }
            } else{
             if(j == n){
                 cout << i+1;
             }else{
                 cout<<i;
             }
            }
        }
        cout << endl;
    }
    return 0;
}
