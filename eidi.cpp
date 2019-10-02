#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int a1,a2,a3,c1,c2,c3;
		cin>>a1>>a2>>a3>>c1>>c2>>c3;
		vector<pair<int,int>> v;
		v.push_back(pair<int,int>(a1,c1));
		v.push_back(pair<int,int>(a2,c2));
		v.push_back(pair<int,int>(a3,c3));
		sort(v.begin(),v.end());
		int flag=1;
		for(int i=0;i<3;i++){
			for(int j=i+1;j<3;j++){
			    //cout<<v[j].first<<" "<<v[j].second<<endl;
				if ((v[i].first==v[j].first) && v[i].second!=v[j].second){
					flag=0;
					break;
				}
				if (v[j].second<v[i].second){
					flag=0;
					break;
				}
			}
			if (flag==0)
				break;
		}
		if (flag==1)
			cout<<"FAIR"<<endl;
		else
			cout<<"NOT FAIR"<<endl;
	}
	return 0;
}