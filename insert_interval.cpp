#include<bits/stdc++.h>
using namespace std;
void new_intervals(vector<vector<int>> v,int n,int start,int end ,vector<vector<int>> &final_ans){
    int flag=0;
    int new_start,new_end;
    for(int i=0;i<v.size();i++){
        //cout<<i<<endl;
        if (v[i][0]>end || v[i][1]<start){
            //cout<<"here1"<<endl;
            if (flag==1){
                //cout<<"here2"<<endl;
                vector<int> tr;
                tr.push_back(new_start);
                tr.push_back(new_end);
                final_ans.push_back(tr);
                flag=0;
            }
            final_ans.push_back(v[i]);
        }
        else if (flag==1){
            //cout<<"here3"<<endl;
            new_start=min(new_start,v[i][0]);
            new_end=max(new_end,v[i][1]);
        }
        else if (flag==0){
            //cout<<"here4"<<endl;
            new_start=min(start,v[i][0]);
            new_end=max(end,v[i][1]);
            flag=1;
        }
    }
    if (flag==1){
        vector<int> ty;
        ty.push_back(new_start);
        ty.push_back(new_end);
        final_ans.push_back(ty);
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        vector<int> tt;
        tt.push_back(temp1);
        tt.push_back(temp2);
        v.push_back(tt);
    }
    //vector<int> insert;
    int temp1,temp2;
    cin>>temp1>>temp2;
    vector<vector<int>> ans;
    new_intervals(v,n,temp1,temp2,ans);
    //cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<"-"<<ans[i][1]<<endl;
    }
    
}
