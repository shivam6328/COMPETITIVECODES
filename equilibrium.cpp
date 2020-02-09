#include<bits/stdc++.h>
using namespace std;

void equi(vector<int> v,int n,long long sum){
long long cur_sum=0;
	if (n==1){
		cout<<1<<endl;
		return;
	}
	for (int i=0;i<n;i++){
		cur_sum+=v[i-1];
		if (cur_sum==sum-cur_sum-v[i]){
			cout<<i+1<<endl;
			return;
		}
	}
	cout<<-1<<endl;
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
		long long sum=0;
		for (int i=0;i<n;i++){
			cin>>temp;
			sum+=temp;
			v.push_back(temp);
		}
		equi(v,n,sum);
	}
	return 0;
}