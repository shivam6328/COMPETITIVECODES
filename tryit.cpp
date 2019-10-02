#include<bits/stdc++.h>
using namespace std;
string findstr(string s1,string s2){
	unordered_map<char,int> m1;
	for(int i=0;i<s2.length();i++){
		cout<<s2[i]<<" ";
		m1[s2[i]]++;
	}
	cout<<endl;
	for(int i=0;i<s1.length();i++){
		if (m1[s1[i]]){
			m1[s1[i]]--;
		}
	}
	for(auto i=m1.begin();i!=m1.end();i++){
		cout<<i->first<<"-"<<i->second<<" ";
		if (i->second>0)
		return "nonono";
	}
	/*for(int i=0;i<s2.length();i++){
		m1[s2[i]]++;
	}*/
	int i=0;
	while(i<s1.length()){
		if (!m1[s1[i]]){
			i++;
		}
		else if (m1[s1[i]]<0){

		}
	}
	return "yesyesyes";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		string ans=findstr(s1,s2);
		cout<<ans<<endl;
	}
	return 0;
}