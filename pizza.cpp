#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<string> v;
		string temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			v.push_back(temp);
		}
		int first_half=0,sec_half=0;
		int tot1=0,tot2=0;
		vector<pair<int,int>> res;
		for(int i=0;i<n;i++){
			first_half=0,sec_half=0;
			for(int j=0;j<v[i].length();j++){
				if (j<v[i].length()/2)
					if (v[i][j]=='1')
						first_half++;
				else{
					if (v[i][j]=='1')
						sec_half++;
				}
				tot1+=first_half;
				tot2+=sec_half;
				res.push_back(pair<int,int>(first_half,sec_half));
			}
		}
		tot1=tot1-tot2;
		int ans=10000;
		for(int i=0;i<res.size();i++){
			if (abs(tot1-(res[i].first-res[i].second))<ans)
			ans=abs(tot1-(res[i].first-res[i].second));	
		}
		cout<<ans<<endl;
	}
	return 0;
}