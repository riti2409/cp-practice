// 101=5

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r;
    int p=1;
    int ans=0;
    while(n!=0){
        r=n%10;
        ans+=r*p;
        p=p*2;
        n=n/10;

    }
    cout<<ans;
    return 0;
}