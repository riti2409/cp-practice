#include<bits/stdc++.h>
#include<climits>

using namespace std;
int main(){
    int min=INT_MAX;
    int max=INT_MIN;
    int n;
    cin>>n;
    int no;
    for(int i=0;i<n;i++){
        cin>>no;
        if(no<min){
            min=no;
        }
        if(no>max){
            max=no;
        }

    }
    cout<<"min"<<min<<"max"<<max;

    return 0;
}