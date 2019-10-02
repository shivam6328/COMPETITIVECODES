#define tt 1000000007
#include<bits/stdc++.h>
using namespace std;
long sequence(long x,long y,long n){
	if (n==2)
		if (y>=0)
		return (y%tt);
		else
		return (y+tt);
	if (n==1)
		if (x>=0)
		return (x%tt);
		else
		return (x+tt);
	if ((sequence(x,y,n-1)-sequence(x,y,n-2))>=0){
	    //cout<<"here";
	    return (sequence(x,y,n-1)-sequence(x,y,n-2))%tt;
	}
	else{
	    //cout<<"here";
	    return tt+(sequence(x,y,n-1)-sequence(x,y,n-2));
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	long int x,y;
	long int n;
	cin>>x>>y>>n;
	long int ans=sequence(x,y,n);
	cout<<ans;
	return 0;
}