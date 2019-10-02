#include<bits/stdc++.h>
using namespace std;
/*void swapp(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}*/

int fxn(vector<long int> v,int n){
	for(int i=0;i<n;i++){
		int minn=i;
		for(int j=i;j<n;j++){
			if (v[j]<v[minn]){
				minn=j;
			}
		}
		//cout<<"min is "<<v[minn]<<endl;
		int temp=v[minn];
		v[minn]=v[i];
		v[i]=temp;
	}
	int summ=0;
	int ans=0;
	for(int i=0;i<n;i++){
		if(summ<=v[i]){
			ans++;
		}
		summ+=v[i];
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<long int> v;
	long int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	int ans=fxn(v,n);
	cout<<ans;
	return 0;
}