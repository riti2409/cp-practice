#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int c;
    for(int i=1;i<=n;i++){
        cout<<a<<",";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}