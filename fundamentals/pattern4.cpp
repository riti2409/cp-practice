// 0
// 10
// 010
// 1010
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int val=i%2==0?1:0;
        for(int j=1;j<=i;j++){
            cout<<val;
            val=1-val;
        }
        cout<<endl;
    }
    return 0;
}