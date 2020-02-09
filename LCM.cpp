#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int x;
	cin>>x;
	long long minn=x;
	long long A=1;
	long long B=x;
	for (long long int i=1;i<=pow(x,0.5);i++){
		if (x%i==0){
			long long a=i;
			long long b=x/i;
			long long lcm=(a*b)/__gcd(a,b);
			long long c=max(a,b);
			if (c<minn && lcm==x){
				minn=c;
				A=a;
				B=b;
			}
		}
	}
	cout<<A<<" "<<B;
	return 0;
}