#include<bits/stdc++.h>
using namespace std;
int main(){
	//int a1,a2,a3,a4;
	vector<int> v;
	int temp;
	for(int i=0;i<4;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	if ((v[0]+v[3])==(v[1]+v[2]) || ((v[0]+v[1]+v[2])==v[3]))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}