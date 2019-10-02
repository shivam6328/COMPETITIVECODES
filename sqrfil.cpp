#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	vector<pair<int,int>> v;
	int flag=1;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-1;j++){
			if (arr[i][j]==-1){
				if (abs(arr[i+1][j])==1 && abs(arr[i][j+1])==1 && abs(arr[i+1][j+1])==1){
					arr[i][j]=-1,arr[i+1][j+1]=-1,arr[i][j+1]=-1,arr[i+1][j]=-1;
					v.push_back(pair<int,int>(i+1,j+1));
				}
			}

			if (arr[i][j]==1){
				if (abs(arr[i+1][j])==1 && abs(arr[i][j+1])==1 && abs(arr[i+1][j+1])==1){
					arr[i][j]=-1,arr[i+1][j+1]=-1,arr[i][j+1]=-1,arr[i+1][j]=-1;
					v.push_back(pair<int,int>(i+1,j+1));
				}
				else{
					flag=0;
					break;
					//out<<-1<<endl;
				}
			}
		}
		if (flag==0)
			break;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (arr[i][j]==1){
			    flag=0;
			    break;
			}
		}
		
			if (!flag)
			break;
	}
	if (flag==0){
		cout<<-1<<endl;
	}
	else{
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
	}

	return 0;
}