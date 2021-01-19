// 1
// 11
// 111
// 1001
// 11111
// 100001

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        if (r % 2 != 0)
        {
            while (c <= r)
            {
                cout << 1;
                c++;
            }
        }
        else
        {
            cout << 1;
            while (c <= r - 2)
            {
                cout << 0;
                c++;
            }
            cout << 1;
        }
        r = r + 1;
        cout << endl;
    }
    return 0;
}