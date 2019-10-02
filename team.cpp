#include<bits/stdc++.h>
using namespace std;
string cards(long n,long m){
	string s="";
	if (n==m+1){
		s+='0';
		n--;
	}
	int xfactor=m/(n+1);
	int rem=m%(n+1);
	//string s="";
	if ((n-m)>1 || (xfactor>2) || (xfactor==2 && rem>0)){
		//cout<<"here";
		return s;
	}
	for(int i=0;i<n;i++){
		//cout<<rem<<endl;
		int temp=xfactor;
		if (rem>0){

			temp++;
			while(temp--){
				m--;
				s+='1';
			}
			s+='0';
		}
		
		else{
			temp=xfactor;
			while(temp--){
				m--;
				s+='1';
			}
			s+='0';
		}
		rem--;	
	}
	if (m!=0){
		while(m--){
			s+='1';
		}
	}
	return s;
}
int main(){
	long int n,m;
	cin>>n>>m;
	string ans=cards(n,m);
	if (ans!="")
	cout<<ans<<endl;
	else
		cout<<-1<<endl;
	return 0;
}