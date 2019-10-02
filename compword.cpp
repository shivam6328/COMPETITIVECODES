#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int flag=0;
	if (s.length()<26)
		cout<<-1<<endl;
	else{
		int i=0,j=25;
		int countques=0;
		unordered_map<char,int> m;
		for(int x=i;x<=j;x++){
			if (s[x]=='?'){
				countques++;
			}
			else{
				m[s[x]]++;
			}
		}
		while(j<s.length()){
			//cout<<s[i]<<" "<<s[j]<<endl;
			cout<<countques<<" "<<m.size()<<endl;
			if (countques+m.size()==26){
				cout<<"yes";
				flag=1;
				break;
			}
			i++,j++;
			if (s[i-1]=='?' && s[j]!='?'){
				countques--;
			}
			else if(s[i-1]!='?' && s[j]=='?'){
				countques++;
			}
			else if(s[i-1]!='?' && s[j]!='?'){
				m[s[i-1]]--;
				m[s[j]]++;
			}
		}
		if (flag==0){
			cout<<"no";
		}
	}
}