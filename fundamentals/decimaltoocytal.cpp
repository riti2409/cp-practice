#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int r,ans=0,i=1;
    while(n!=0){
        r=n%8;
        ans=ans+r*i;
        i=i*10;
        n=n/8;
    }
    cout<<ans<<endl;
    return 0;
}