#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"enter n and k"<<endl;
    cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>> min_heap;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        cout<<"size is "<<min_heap.size()<<endl;
        if (min_heap.size()<k){
            min_heap.push(temp);
            if (min_heap.size()<k)
            cout<<"not enough elements yet!!!"<<endl;
            else
            cout<<"current kth largest element is "<<min_heap.top()<<endl;
        }
        else{
            if(temp<min_heap.top())
                cout<<"current kth largest element is "<<min_heap.top()<<endl;
            else{
                min_heap.pop();
                min_heap.push(temp);
                cout<<"current kth largest element is "<<min_heap.top()<<endl;
            }
        }
    }
    return 0;
}
