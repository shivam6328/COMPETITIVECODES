#include<bits/stdc++.h>
using namespace std;
int minvacs(vector<int> &v,int n){
	int min_vacs=0;
	if (v[0]==0)
		min_vacs++;
	else if(v[0]==3){
	    int j=1;
        int count=0;
		while(v[j]==3){
			count++;
			j++;
		}
		if (count%2!=0){
			v[0]=v[j];
		}
		else{
			if (v[j]==1)
				v[0]=2;
			else
				v[0]=1;
		}						
	}
	for(int i=1;i<n;i++){
		if (v[i]==0){
			min_vacs++;
		    //cout<<"today holiday"<<endl;
		}
		else if(v[i]==1){
			if (v[i-1]==1){
				min_vacs++;
				v[i]=0;
				//cout<<"today holiday"<<endl;
			}
		}
		else if(v[i]==2){
			if (v[i-1]==2){
				min_vacs++;
				v[i]=0;
				//cout<<"today holiday"<<endl;
			}
		}
		else if (v[i]==3){
			if (v[i-1]==0){
				if (i!=n-1){
					if (v[i+1]==1){
						v[i]=2;
					}
					else if(v[i+1]==2){
						v[i]=1;
					}
					else if(v[i+1]==3){
						int j=i+1;
						int count=0;
						while(v[j]==3 && j<n){
							count++;
							j++;
						}
						if (count%2!=0 && v[j]!=0){
							v[i]=v[j];
						}
						else if (count%2==0 && v[j]!=0){
							if (v[j]==1)
								v[i]=2;
							else
								v[i]=1;
						}
						else if (v[j]==0){
						    v[i]=1;
						}
					}	
				}
				
			}
			else{
				if (v[i-1]==1)
					v[i]=2;
				else if(v[i-1]==2)
					v[i]=1;
			}
		}
	}
	return min_vacs;
}
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	int ans=minvacs(v,n);
	cout<<ans<<endl;
	/*for(int i=0;i<n;i++){
	    cout<<v[i]<<" ";
	}*/
}