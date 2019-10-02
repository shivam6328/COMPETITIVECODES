#include<bits/stdc++.h>
using namespace std;
int fxn(int n,int m,int val,int &ans){
    //cout<<n<<" "<<m<<endl;
    if (n<m/2 && val+1==ans)
    return 0;
    if (val>ans && ans!=0){
        return 0;
    }
	if (n<0)
		return 0;
	if (n==m){
	    //cout<<val<<" "<<ans<<endl;
	    //cout<<"found"<<endl;
	    //if (ans==0)
		ans=val;
		return 1;
	}
	if (n<m){
		if (fxn(n*2,m,val+1,ans)){
		    if (fxn(n-1,m,val+1,ans))
		    return 1;
		    return 1;
		}
		else if(fxn(n-1,m,val+1,ans))
		return 1;
		return 0;
	
	}
	else if(n>m){
		if (fxn(n-1,m,val+1,ans))
		return 1;
		else
		return 0;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int ans=0;
	fxn(n,m,0,ans);
	cout<<ans<<endl;
	return 0;
}