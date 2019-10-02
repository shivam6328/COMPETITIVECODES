#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		vector<int> v;
		int tmp;
		for(int x=0;x<n;x++){
			cin>>tmp;
			v.push_back(tmp);
		}
		int x=0,p=0;
		for(int j=1;j<n-1;j++){
			if (v[j]<v[j-1] && v[j]<v[j+1] && v[j-1]==v[j+1]){
				p++;
			}
			if (v[j]!=v[j+1])
				x++;
		}

		if (v[0]!=v[1])
			x++;

		cout<<x<<" "<<p<<endl;		
	}
}