#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
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
		int ans=0,flag=1,min=v[n-1];
		for(int i=n-2;i>=0;i--){
			if (v[i]<=min){
				min=v[i];
			}
			else{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}