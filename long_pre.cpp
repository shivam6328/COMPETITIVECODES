#include<bits/stdc++.h>
using namespace std;

string longest(vector<string> v,int n,int min_len){
	string temp1="";
	for (int i=0;i<min_len;i++){
		char temp=v[0][i];
		for(int j=0;j<n;j++){
			if (temp!=v[j][i]){
				return temp1;	
			}
		}
		temp1+=temp;
	}
	return temp1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> v;
		string temp;
		int min_len=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>temp;
			if (temp.length()<min_len)
				min_len=temp.length();
			v.push_back(temp);
		}
		string ans=longest(v,n,min_len);
		if (ans.length()==0){
			cout<<-1<<endl;
		}
		else{
			cout<<ans<<endl;
		}
	}
	return 0;
}