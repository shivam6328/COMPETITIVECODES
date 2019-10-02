#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	string s;
	cin>>n;
	cin>>s;
	string temp="0000000000";
	int left=0,right=9;
	for(int i=0;i<n;i++){
	    
		if (s[i]=='L'){
			temp.erase(left,1);
			temp.insert(left,"1");
			left++;
		}
		else if(s[i]=='R'){
			temp.erase(right,1);
			temp.insert(right,"1");
			right--;
		}
		
		else{
			temp.erase(s[i]-'0',1);
			temp.insert(s[i]-'0',"0");
			left=min(s[i]-'0',left);
			right=max(s[i]-'0',right);
		}
		if (left>right){
	        break;
	    }
		//cout<<temp<<endl;;
	}
	cout<<temp;
	return 0;
}