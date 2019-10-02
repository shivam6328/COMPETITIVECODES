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
	int ans=1;
	sort(v.begin(),v.end());
	/*for(int i=0;i<n;i++){
	    cout<<v[i]<<" ";
	}*/
	int curr=v[0];
	for(int i=1;i<n;i++){
		if (v[i]>=curr){
			curr+=v[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}