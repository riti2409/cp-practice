#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float d=(b*b-4*a*c);
    int x1= ((-b-sqrt(d))/(2*a));
    int x2= ((-b+sqrt(d))/(2*a));
   
    if(d==0){
        
        cout<<"Real and Equal"<<endl;
        cout<<x1<<" "<<x2<<endl;
    }
    
    else if(d>=0){
        
        cout<<"Real and Distinct"<<endl;
        cout<<x1<<" "<<x2<<endl;
    }
    
    else if (d<0){
        cout<<"Imaginary"<<endl;
        
    }
    return 0;
}