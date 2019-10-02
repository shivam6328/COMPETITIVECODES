#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n;
	unordered_map<int,int> a;
	int temp;
	unordered_map<int,int> b;
	for(int i=0;i<n;i++){
		cin>>temp;
		a[temp]++;
	}
    cin>>m;
	for(int i=0;i<m;i++){
		cin>>temp;
		b[temp]++;
	}
	int ans1=0,ans2=0;
	int flag=1;
	for(auto i=a.begin();i!=a.end();i++){
		for(auto j=b.begin();j!=b.end();j++){
			if (!a[i->first+j->first] && !b[i->first+j->first]){
				ans1=i->first,ans2=j->first;
				flag=0;
				break;
			}
		}
		if (flag==0)
			break;
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}