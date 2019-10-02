#include<bits/stdc++.h>
using namespace std;
int fxn(vector<int> v,int n,int sum){
	int begin=0,end=0,ans=0;
	int cursum=0;
	for(int i=0;i<n;i++){
	    //cout<<i<<" ";
		if ((cursum+v[i])<=sum){
		    //cout<<"here1"<<endl;
			cursum+=v[i];
			end++;
			ans=max(ans,end-begin);
		}
		else{
		    //cout<<"here2"<<endl;
			ans=max(ans,end-begin);
			while((cursum+v[i])>sum){
				cursum-=v[begin];
				begin++;
			}
			cursum+=v[i];
			end++;
			//cout<<begin<<"-"<<end<<endl;
		}
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	int n,t;
	cin>>n>>t;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	int ans=fxn(v,n,t);
	cout<<ans;
	return 0;
}