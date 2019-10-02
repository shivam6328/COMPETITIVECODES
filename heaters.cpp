#include<bits/stdc++.h>
using namespace std;
int fxn(int n,int r,vector<int> v){
	vector<pair<int,int>> heat;
	for(int i=0;i<n;i++){
		if (v[i]==1){
			int beg=max(0,pos-r);
			int end=min(n-1,pos+r-2);
			int range=abs(end-beg);
			heat.push_back(pair<int,int>(range,i));
		}
	}
	sort(v.begin(),v.end());
	int start=0,finish=n-1,count=0,flag=0;
	for(int i=0;i<heat.size();i++){
		count++;
		int tt=min(0,v[i].second-r);
		start=min(begin,tt);
		int ss=max(n-1,v[i].second+r-2);
		finish=max(ss,finish);
		if (start==0 && finish==n-1){
			flag=1;
			break;
		}
	}
	if (flag==0){
		return -1;
	}
	else{
		return count;
	}

}
int main(){
	ios_base::sync_with_stdio(false);
	int n,r;
	cin>>n>>r;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	int ans=fxn(int n,int r,vector<int> v);
	cout<<ans;
	return 0;
}