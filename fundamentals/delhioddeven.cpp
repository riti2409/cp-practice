#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
	
    while(t--){
        cin>>n;
        
        int even=0;
        int odd=0;
        while(n!=0){
           int r=n%10;
            if(r%2==0){
            even=even+r;}
            else{
            odd=odd+r;}
            n=n/10;
        }
        if(even%4==0 || odd%3==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}