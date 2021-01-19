// 1
// 11
// 202
// 3003
// 40004
#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	cout<<1<<endl;
	for(int i=2;i<=n;i++)
	{
		int val=i-1;
		int j=1;
		
			cout<<val;
			while(j<=i-2)
			{
			cout<<0;
			j=j+1;
			}
			cout<<val;
		
		cout<<endl;
	}
	return 0;
}