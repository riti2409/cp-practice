#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int i, j, n, s, no;
    cin >> no;
    for (i = 0; i < no; i++)
    {
        for (s = 0; s < no - i; s++)
        {
            cout << " ";
        }
        n = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << n <<" ";
            n = ((n * (i - j)) / (j + 1));
        }
        cout << endl;
    }
    return 0;
}