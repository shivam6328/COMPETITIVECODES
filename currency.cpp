#include<bits/stdc++.h>
using namespace std;
int exchange(long int n,int d,int e){
	vector<int> vf;
	vector<int> v1{1, 2, 5, 10, 20, 50, 100};
	vector<int> v2{5, 10, 20, 50, 100,200};
	for(int i=0;i<6;i++){
		vf.push_back(v1[i]*d);
		vf.push_back(v2[i]*e);
	}
	vf.push_back(v1[6]*d);
	sort(vf.begin(),vf.end());
	for(int i=0;i<13;i++){
	    cout<<vf[i]<<" ";
	}
	cout<<endl;
	int start=0,end=12;
	long int minans=n;
	while(start<end){
		cout<<vf[start]<<" "<<vf[end]<<endl;
		if ((n-vf[end]-vf[start])<minans && (n-vf[end]-vf[start])>=0){
			//cout<<"here";
			minans=n-vf[end]-vf[start];
			//cout<<minans<<" is curr ans"<<endl;

		}
		if ((vf[start]+vf[end])<n){
			start++;
		}
		else{
			end--;
		}
	}
	for(int i=0;i<=12;i++){
		if ((n-vf[i])<minans && vf[i]<=n)
			minans=abs(vf[i]-n);
	}
	return minans;
}
int main(){
	ios_base::sync_with_stdio(false);
	long int n;
	int d,e;
	cin>>n>>d>>e;
	int ans=exchange(n,d,e);
	cout<<ans<<endl;
	return 0;
}