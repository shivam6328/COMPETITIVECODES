#include<bits/stdc++.h>
using namespace std;

void ispossible(int n,int d){
	int x;
	int start=0,end=d-1;
	while(start<=end){
		int x=ceil(((float)(start+end))/2);
		if ((x+ceil((float)d/(x+1)))<=n){
			//cout<<x<<endl;
			cout<<"YES"<<endl;
			return;
		}
		else{
			end=x-1;
		}
	}
	cout<<"NO"<<endl;
	return;
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		ispossible(n,d);
	}
	return 0;
}