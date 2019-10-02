#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	string s,sans="";
	cin>>s;
	for(int i=0;i<n;i++){
		if (k==0){
			sans+=s[i];
		}
		else if (i==0 && i!=n-1){
			if (s[i]!='1')
			k--;
			sans+='1';
		}
		else{
			if (s[i]!='0')
			k--;
			sans+='0';
		}
	}
	cout<<sans;
	return 0;
}