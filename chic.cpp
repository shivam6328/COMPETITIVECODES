#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
		int b,p,f,h,c;
		cin>>b>>p>>f;
		cin>>h>>c;
		int fin=p;
		int ans=0;
		if (b==1){
		    cout<<0<<endl;
		    continue;
		}
		for(int i=0;i<=fin;i++){
			if ((b-(2*i))/2>=0 && b>=(2*i)){
                
				int pp=(b-(2*i))/2;
				pp=min(pp,f);
				if ((i*h)+(pp*c)>ans){
				    //cout<<i<<" "<<pp<<endl;
					ans=((i*h)+(pp*c));
					//cout<<ans<<endl;
				}
			}
		}
		cout<<ans<<endl;
	}
}
