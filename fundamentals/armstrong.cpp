#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(long long int n){
    long long int temp=n;
    long long int i=0;
    while(temp!=0){
        
        i++;
        temp=temp/10;
    }
    temp=n;
    long long int r,ans=0;
    while(temp!=0){
        r=temp%10;
        ans+=pow(r,i);
        temp=temp/10;
    }
    if(ans==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    long long int n;
    cin>>n;
    bool y=isArmstrong(n);
    if(y==true){
        cout<< "true"<<endl;
    }
    else{
        cout<< "false"<<endl;
    }
    return 0;
}