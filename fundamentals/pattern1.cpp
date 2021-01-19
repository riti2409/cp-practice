// 1
// 2 3
// 4 5 6


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int val=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<val<<" ";
            val=val+1;
        }
        cout<<endl;
    }
    return 0;
}