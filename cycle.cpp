#include<bits/stdc++.h>
using namespace std;
int fxn(vector<int> v,int n){
    ios_base::sync_with_stdio(false);
	int begin=0,end=0;
	int len=0,maxlen=0;
	int flag=0;
	for(int i=0;i<n-1;i++){
		if ((v[i] & v[i+1])!=0){
			end++;
		}
		else{
			for(int j=end-2;j>=begin;j--){
				if ((v[end] & v[j])!=0){
				    flag=1;
					maxlen=max((end-j+1),maxlen);
					break;
				}
			}
			begin=end+1;
			end=begin;
			
		}
	}
	if (flag==0){
	    if (((v[end] & v[begin])!=0) && (end-begin)>1){
	        for(int j=end-2;j>=begin;j--){
				if ((v[end] & v[j])!=0){
				    flag=1;
					maxlen=max((end-j+1),maxlen);
					break;
				}
			}
	    }
	    else{
	        return -1;
	    }
	}
	return maxlen;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	int ans=fxn(v,n);
	cout<<ans<<endl;
	return 0;
}