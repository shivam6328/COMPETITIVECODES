#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			cout<<(v[i] & v[j])<<" ";
		}
		cout<<endl;
	}
	return 0;
}