#include<bits/stdc++.h>
using namespace std;
int kth(vector<int> v,int n,int k){
    //priority_queue<int,vector<int>,greater<int>> min_heap;
    priority_queue<int> min_heap;
    for (int i=0;i<n;i++){
        if (min_heap.size()<k){
            cout<<"no problemo for "<<v[i]<<endl;
            min_heap.push(v[i]);
        }
        else if(min_heap.size()==k && v[i]>min_heap.top()){
            cout<<"popping "<<min_heap.top()<<" and putting "<<v[i]<<endl;
            min_heap.pop();
            min_heap.push(v[i]);
        }
        
    }
    return min_heap.top();
    //return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    cout<<kth(v,n,2);
    return 0;
}
