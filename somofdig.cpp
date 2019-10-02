#include<bits/stdc++.h>
using namespace std;
void findmaxmin(int m,int s){
	if (s==0){
		return;
	}
	else if (m==1 && s>9){
		return;
	}
	
	string st="";
	while(s>0 && m>1){
		st+=(char)(min(9,s-(m-1)));
		s-=min(9,s-(m-1));
		m--;
	}
	st+=(char)s;

	cout<<st<<endl;
}
int main(){
	int m,s;
	cin>>m>>s;
	findmaxmin(m,s);
}