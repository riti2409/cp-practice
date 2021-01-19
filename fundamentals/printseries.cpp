#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    int i=1;
    int s;
    cin>>n1>>n2;
    while(n1!=0){
        s=3*i+2;
        i++;
        if(s%n2==0){
            continue;
        }
        else{
            cout<<s<<endl;
        }
		n1-=1;
    }
    return 0;
}