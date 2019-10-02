#include<bits/stdc++.h>
using namespace std;
long long int fxn(long long int n,long long int m){
    if (m>n){
        return 0;
    }
	if (n==1 && m==1)
		return 1;
	unordered_map<int,int> rep;
	long long int i=0;
	long long int sum=0;
	vector<long long int> v;
	while(1){
	    //cout<<m*(i+1)<<" ";
		if (!rep[(m*(i+1))%10]){
			rep[(m*(i+1))%10]++;
			sum+=((m*(i+1))%10);
			v.push_back(sum);
		}
		else{
			break;
		}
		i++;
	}
	n=n/m;
	//cout<<sum<<endl;
	//cout<<n<<" "<<i<<endl;
	long long int divs=n/i;
	long long int rems=n%i;

	
	//cout<<divs<<" "<<rems<<endl;
	long long int ans=(sum*divs);
	if (rems>=1)
	ans+=v[rems-1];
	
	return ans;

}
int main(){
	int q;
	cin>>q;
	while(q--){
	long long int n,m;
	cin>>n>>m;
	long long int ans=fxn(n,m);
	cout<<ans<<endl;
	}
	return 0;
}