#include<bits/stdc++.h>
using namespace std;
int main(){
    int minf;
    cin>>minf;
	int maxf;
	cin>>maxf;
	int step;
	cin>>step;
    while(minf<=maxf){
        int c=(5*(minf-32))/9;
        cout<<minf<<" "<<c<<endl;
        minf=minf+step;

    }
    return 0;
}