#include<bits/stdc++.h>
using namespace std;
void tastier(vector<long int> v,int n,long long sum,long best){
	/*int dp[n+1]={0};
	long long cur_sum=0;
	for (int i=0;i<n;i++){
		if (v[i]>0){
			cur_sum+=v[i];
			dp[i]=cur_sum;
		}
	}*/
	int flag=1;
	for(int j=0;j<n;j++){
	    if (v[j]<0){
	        flag=0;
	        break;
	    }
	}
	long long int max_ending_here=0;
	long long int max_so_far=0;
	for (int i=1;i<n;i++){
		max_ending_here+=v[i];
		
		if (max_ending_here<0){
			max_ending_here=0;
		}
		if (max_so_far<max_ending_here)
			max_so_far=max_ending_here;
	}
	max_ending_here=0;
	//long long int max_so_far=0;
	for (int i=0;i<n-1;i++){
		max_ending_here+=v[i];
		
		if (max_ending_here<0){
			max_ending_here=0;
		}
		if (max_so_far<max_ending_here)
			max_so_far=max_ending_here;
	}
	if (max_so_far==0){
		max_so_far=best;
	}
    //cout<<max_so_far<<" "<<sum<<endl;
	if (max_so_far<sum){
	    
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return;
}


int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		vector<long int> v;
		long int temp;
		long long sum=0;
		long best=INT_MIN;
		for (int i=0;i<n;i++){
			cin>>temp;
			if (temp>best)
				best=temp;
			sum+=temp;
			v.push_back(temp);
		}
		tastier(v,n,sum,best);
		cout<<endl;
	}
	return 0;
}