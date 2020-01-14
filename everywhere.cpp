#include<bits/stdc++.h>
using namespace std;
void catchALL(string s,int n){
	unordered_map<char,int> m;
	int count=0;
	for (int i=0;i<n;i++){
		if (!m[s[i]]){
			m[s[i]]=1;
			count++;
		}
	}

	int ptr1=0,ptr2=n-1;
	while(ptr1<ptr2){
		if (m[s[ptr1]]>1){
			m[s[ptr1]]--;
			ptr1++;
		}
		if (m[s[ptr2]]>1){
			m[s[ptr2]]--;
			ptr2--;
		}
	}
	cout<<ptr2-ptr1+1;

}




int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	catchALL(s,n);
	return 0;
}