#include<bits/stdc++.h>
using namespace std;
void fxn(int arr[100][100],int x,int y,int start1,int start2,int end1,int end2){
	cout<<arr[x][y]<<" ";
	if (x!=start1 && x!=end2 && y!=end1 && y!=start2){
		fxn(arr,x,y+1,start1,start2,end1,end2);
	}
	else if (x==start1 && y==start2 && y==end1 && x==end2){
		return;
	}
	else if (y==end1){
		fxn(arr,x+1,y,start1+1,start2,end1,end2);
	}
	else if(x==end2){
		fxn(arr,x,y-1,start1,start2,end1-1,end2);
	}
	else if(y==start1){
		fxn(arr,x-1,y,start1,start2,end1,end2-1);
	}
	else if(x==start1){
		fxn(arr,x,y+1,start1,start2+1,end1,end2);
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