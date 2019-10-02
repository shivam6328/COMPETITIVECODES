#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		long long  sum=0;
		long int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			sum+=temp;
		}
		//cout<<sum<<" "<<n<<endl;
		int tempp=ceil(sum/(float)n);
		cout<<tempp<<endl;
	}
}