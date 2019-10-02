#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false);
	int n,k;
	scanf("%d%d",&n,&k);
	list<long int> v;
	long int temp;
	unordered_map<long int,int> m;
	for(int i=0;i<n;i++){
		scanf("%ld",&temp);
		if (m[temp]==0){
			//cout<<"here"<<temp<<endl;
			m[temp]++;
			if (k==0){
				if (!v.empty()){
					m[v.front()]=0;
					v.pop_front();
				}
				v.push_back(temp);
			}
			else{
				v.push_back(temp);
				k--;
			}

		}
	}
	printf("%d\n",v.size());
	for(auto i=v.rbegin();i!=v.rend();i++){
		printf("%ld ",*i);
	}
	return 0;
}