#include <bits/stdc++.h>
using namespace std;

void removeduplicates(char a[])
{
    int prev = 0;
    int l = strlen(a);
    if (l == 0 || l == 1)
    {
        return;
    }

    for (int curr = 1; curr < l; curr++)
    {
        if (a[curr] != a[prev])
        {
            prev++;
            a[prev] = a[curr];
        }
    }
    a[prev + 1] = '\0';
    return;
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);
    removeduplicates(a);
    cout<<a<<endl;
    return 0;
}