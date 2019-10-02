#include<bits/stdc++.h>
using namespace std;
long int xorinacci(int a,int b,int n){
	if (n==0)
		return a;
	if (n==1)
		return b;
	return (xorinacci(n-1) ^ xorinacci(n-2));
}
int main(){
	int t,a,b,n;
	cin>>T;
	while(t--){
		cin>>a>>b>>n;
		int ans=xorinacci(a,b,n);
		cout<<ans<<endl;
	}
	return 0;
}