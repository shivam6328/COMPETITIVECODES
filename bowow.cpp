#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count=0,index=0;
	//cout<<s.length()<<endl;
	for(int i=s.length()-1;i>=0;i--){
	    //cout<<i<<endl;
		if (s[i]=='1'){
			index=i;
			count++;
		}
	}
	if (count==0 || (count==1 && index==s.length()-1)){
	    //cout<<"here";
		cout<<0<<endl;
	}
	else{
		if (count>1){
		    //cout<<"here";
		    if (s.length()%2!=0)
			cout<<((s.length()-index-1)/2)+1;
            else
            cout<<((s.length()-index)/2)+1;
		}
		else{
		    if (s.length()%2!=0)
			cout<<((s.length()-index-1)/2);
            else
            cout<<((s.length()-index)/2);
		    //cout<<"here";
		
		}
	}
	return 0;

}