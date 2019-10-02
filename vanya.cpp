#include<bits/stdc++.h>
using namespace std;
int subset(vector<int> v,int sum,int cur_sum,int i){
	if (i>=v.size() || cur_sum>sum){
		return 0;
	}
	if (cur_sum+v[i]==sum){
		return 1;
	}
	return subset(v,sum,cur_sum,i+1) || subset(v,sum,cur_sum+v[i],i+1);

}
int main(){
	int n,sum;
	cin>>n>>sum;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	int ans=subset(v,sum,0,0);
	cout<<ans<<endl;
	return 0;
}