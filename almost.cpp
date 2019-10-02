#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	if (n%2==0){
		cout<<"NO";
	}
	else{
		int arr[2*n]={0};
		int tmp=1;
		for(int i=0;i<n;i++){
			if (i%2==0){
				arr[i]=tmp;
				arr[i+n]=++tmp;
				tmp++;
			}
			else{
				arr[i+n]=tmp;
				arr[i]=++tmp;
				tmp++;
			}
		}
		cout<<"YES"<<endl;
		for(int i=0;i<2*n;i++){
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}