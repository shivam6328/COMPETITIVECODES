#include<bits/stdc++.h>
using namespace std;
int ispossible(vector<int> v,int n,int maxx){
	int arr[250]={0};
	for(int i=0;i<n;i++){
		arr[v[i]]=-1;
	}
	//cout<<endl;
	arr[1]=1;
	for(int i=1;i<n;i++){
		if (arr[v[i]]!=-1){
			int prev_jump=arr[v[i]];
			cout<<prev_jump<<endl;
			if (arr[v[i]+(prev_jump)]!=0){
				arr[v[i]+prev_jump]=prev_jump;
				cout<<"here1"<<endl;
			}
			if (arr[v[i]+(prev_jump-1)]!=0){
				arr[v[i]+prev_jump-1]=prev_jump-1;
				cout<<"here2"<<endl;
			}
			if (arr[v[i]+(prev_jump+1)]!=0){
				arr[v[i]+prev_jump+1]=prev_jump+1;
				cout<<"here3"<<endl;
			}
		}
	}
	for(int i=0;i<=maxx;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	if (arr[maxx]!=0 && arr[maxx]!=-1){
		return 1;
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	vector<int> v;
	int temp;
	int maxx=-1;
	for(int i=0;i<n;i++){
		cin>>temp;
		if (temp>maxx)
			maxx=temp;
		v.push_back(temp);
	}
	cout<<ispossible(v,n,maxx)<<endl;
	return 0;
}