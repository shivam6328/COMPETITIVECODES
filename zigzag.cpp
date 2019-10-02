#include<bits/stdc++.h>
using namespace std;
void fxn(int arr[100][100],int x,int y,int &flag){
	cout<<arr[x][y]<<" ";
	if (x==n-1 && y==n-1){
		return;
	}
	else if(y==n-1){
		flag=1;
		fxn(arr,x+1,y,flag);
	}
	else if(y==0){
		flag=0;
		fxn(arr,x+1,y,flag);
	}
	else{
		if (flag==1)
		fxn(arr,x,y-1,flag);
		else
		fxn(arr,x,y+1,flag);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[100][100]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int flag=0;
	fxn(arr,0,0,flag);
	return 0;
}