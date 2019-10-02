#include<bits/stdc++.h>
using namespace std;
int istrue(long int x){
	while(x>1){
		if (x%2!=0 && x%3!=0)
			return 0;
		else{
			if (x%2==0)
				x=x/2;
			else if(x%3==0)
				x=x/3;
		}
	}
	return 1;
}
int helper(vector<long int> v,int n){
	long int maxx=v[0];
	for(long int i=1;i<n;i++){
		if (v[i]>maxx){
			maxx=v[i];
		}
	}
	//cout<<"max is "<<maxx<<endl;
	for(long int i=0;i<n;i++){
		if ( maxx%v[i]!=0 || !istrue(maxx/v[i])){
			//cout<<"max is "<<maxx<<endl;
			//cout<<i<<"-"<<v[i]<<endl;
			if (istrue(v[i]/__gcd(maxx,v[i])) && istrue(maxx/__gcd(maxx,v[i]))){
				maxx=v[i]*maxx/__gcd(v[i],maxx);
			}
			else
			return 0;
		}
	}
return 1;

}
int main(){
	ios_base::sync_with_stdio(false);
	long int n;
	cin>>n;
	vector<long int> v;
	long int temp;
	for(long int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	int ans=helper(v,n);
	if (ans==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}