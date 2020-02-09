#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	unordered_map<string,int> m;
	string temp;
	//int counter=1;
	for(int i=0;i<n;i++){
	    int counter=1;
		cin>>temp;
		if (!m[temp]){
			m[temp]=1;
			cout<<"OK"<<endl;
		}
		else{
			int xs=m[temp];
			string alsotemp=temp+to_string(xs);
			m[alsotemp]=1;
			m[temp]=xs+1;
			cout<<alsotemp<<endl;
		}
	}
	return 0;
}