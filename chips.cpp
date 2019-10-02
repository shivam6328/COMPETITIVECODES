#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long int temp;
	int odd=0,even=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		if (temp%2==0)
			even++;
		else
			odd++;
	}
	cout<<min(even,odd);
	return 0;
}