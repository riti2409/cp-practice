#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    if (n > 2)
    {
		unsigned long long int a, b;
        if (n % 2 == 0)
        {
            unsigned long long int x = n / 2;
            a = (x * x) - 1ULL;
            b = (x * x) + 1ULL;
           
        }
        else
        {
            unsigned long long int y=n;
            a= (y*y)/2ULL;
            b=((y*y)/2ULL)+1ULL;
            
        }
		cout << a <<" "<< b<<endl;
    }
    else
    {
        cout << -1<<endl;
    }
    return 0;
}