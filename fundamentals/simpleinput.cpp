#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int csum=0;
    while(1){
        cin>>n;
        csum+=n;
        if(csum<0){
        break;
		}
        else{
        cout<<n<<endl;
		}
    }
   
    return 0;
}