#include<bits/stdc++.h>
using namespace std;

void lead(vector<int> v,int n){
	int max_right=INT_MIN;
	for (int i=n-1;i>=0;i--){
		if (v[i]>=max_right){
			max_right=v[i];	
			v[i]=v[i]-(2*v[i]);	
		}
	}
	for (int i=0;i<n;i++){
		if (v[i]<0 || (v[i]==0 && i==n-1))
			cout<<abs(v[i])<<" ";
	}
	return;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			v.push_back(temp);
		}
		lead(v,n);
		cout<<endl;
	}
	return 0;
}