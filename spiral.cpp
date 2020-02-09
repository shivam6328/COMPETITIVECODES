#include<bits/stdc++.h>
using namespace std;

void spiral(int rows,int cols,vector<vector<int>> v){
	int first_row=0,first_col=0;
	while(first_row<rows && first_col<cols){
		for (int i=first_col;i<cols;i++){
			cout<<v[first_row][i]<<" ";
		}
		first_row++;
		for(int i=first_row;i<rows;i++){
			cout<<v[i][cols-1]<<" ";
		}
		cols--;
		if (first_row<rows){
			for(int i=cols-1;i>=first_col;i--){
				cout<<v[rows-1][i]<<" ";
			}
			rows--;
		}
		if (first_col<cols){
			for (int i=rows-1;i>=first_row;i--){
				cout<<v[i][first_col]<<" ";
			}
			first_col++;
		}
	}
}




int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		vector<vector<int>> v;
		vector<int> temp;
		int temp1;
		for (int i=0;i<m;i++){
		    vector<int> temp;
			for(int j=0;j<n;j++){
				cin>>temp1;
				temp.push_back(temp1);
			}
			v.push_back(temp);
		}
		/*//cout<<v[1][2]<<endl;
		for (int i=0;i<m;i++){
		    for(int j=0;j<n;j++){
		        cout<<v[i][j]<<" ";
		    }
		    cout<<endl;
		}*/
		spiral(m,n,v);
		//cout<<endl<<"------------------------------------------"<<endl;
		cout<<endl;
	}
	return 0;
}