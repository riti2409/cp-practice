#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int c1,c2,c3,c4;
	int n,m;
	while(t--){
    
    cin>>c1>>c2>>c3>>c4;
    
    cin>>n>>m;
    char r[1004];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    char c[1004];
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    int r_c=0;
    for(int i=0;i<n;i++){
        r_c+=min(c1*r[i],c2);
    }
    r_c=min(r_c,c3);
    int c_c=0;
    for(int i=0;i<m;i++){
        c_c+=min(c1*c[i],c2);
    }
    c_c=min(c_c,c3);
    int ans=min(c4,r_c+c_c);
    cout<<ans<<endl;
	}

    return 0;
}