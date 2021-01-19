#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r,ans=0;
    while(n!=0){
        r=n%10;
        ans+=r;
        n=n/10;
    }
    cout<<ans<<endl;
    return 0;
}