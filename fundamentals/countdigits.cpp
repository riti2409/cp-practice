#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int d;
    cin>>n;
    cin>>d;
    int r;
    int c=0;
    while(n!=0){
        r=n%10;
        if(r==d){
            c++;
        }
        n=n/10;
    }
    cout<<c<<endl;
    return 0;
}