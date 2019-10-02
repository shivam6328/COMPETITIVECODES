#include<bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	long int t,st,in,ex;
	cin>>t;
	while(t--){
		cin>>st>>in>>ex;
		if (ex==0){
			if (st>in)
				cout<<1<<endl;
			else
				cout<<0<<endl;
		}
		else{
			long int temp=ceil((ex+in-st)/2.0 +0.1);
			long int ans=ex-temp+1;
			if (ans<0){
				if (st>in)
					cout<<1<<endl;
				else
					cout<<0<<endl;
			}
			else{
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}