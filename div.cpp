#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		int lol=k-1,sum=0,flag=0;
		for(int j=i+1;j<n;j++){
			int xx=v[j];
			int cur_sum=0;
			while(xx>v[i]){
				xx=xx/2;
				cur_sum++;
			}
			if (xx==v[i]){
				lol--;
				sum+=cur_sum;
			}
			if (lol==0){
				flag=1;
				break;
			}
		}
		if (flag==1){
			if (sum<min){
				min=sum;
			}	
		}

	}
	cout<<min;
	return 0;
}