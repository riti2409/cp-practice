#include<iostream>
using namespace std;

	bool increasingDecreasing(int n)
{
    int prev;
    cin >> prev;

    bool isValid = true;
    bool isDecreasing = true;

    while (--n)
    {
        int curr;
        cin >> curr;
        if (curr == prev)
        {
            isValid = false;
            break;
        }
        else if (curr > prev)
        {
            isDecreasing = false;
        }
        else if (!isDecreasing && curr < prev)
        {
            isValid = false;
            break;
        }

        prev = curr;
    }

    return isValid;
}

int main() {
	int n;
	cin>>n;
	bool y= increasingDecreasing(n);
	if(y==1){
		cout<<"Yes"<<endl;

	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}