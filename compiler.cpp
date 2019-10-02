#include<bits/stdc++.h>

using namespace std;

struct label_table{
    string name;
    int address;
};

struct instruction_table{
    string name;
    int size;
    string operand;
    string binary_code;
};

instruction_table instruction[10];
label_table label[10];
int label_index=0;
vector<string> input;

void pass1(){
    cout<<"Enter no. of instructions ";
    int n;
    cin>>n;
    //fflush(stdin);
    int c;
    while ((c = getchar()) != '\n' && c != EOF){}
    string s;
    int cptr=0;
    while(n){
        //fflush(stdout);
        getline(cin,s);
        
        input.push_back(s);
        size_t found = s.find("START");
        if(s[0]=='#'){
            continue;
        }
        else if (found != string::npos){
            int i=0;
            int ad=0;
            for(i=0;i<s.size();i++){
                if((s[i]>='0')&&(s[i]<='9')){
                    ad=ad*10 + (s[i]-'0');
                }
            }
            cptr=ad;
        }
        else if(s.find(":")!=string::npos){
            string label_name="";
            int label_address=cptr;
            int curr=0;
            while((s[curr]!=':')&&(s[curr]!=' ')){
                label_name+=s[curr];
                curr++;
            }
            int found=0;
            if(label_index!=0){
                for(int j=0;j<label_index;j++){
                    if(label[j].name==label_name){
                        found=1;
                        break;
                    }
                }
            }
            if(found){
                cerr<<"LABEL already present.. error..";
                return;
            }
            label[label_index]={label_name,label_address};
            //            cout<<label[label_index].address<<" "<<label[label_index].name<<endl;
            label_index++;
        }
        else{
            string instruction_name="";
            int curr=0;
            while(s[curr]!=' '){
                instruction_name+=s[curr];
                curr++;
            }
            int f=0;
            for(int i=0;i<5;i++){
                if(instruction[i].name==instruction_name){
                    cptr+=instruction[i].size;
                    f=1;
                    break;
                }
            }
            if(f==0){
                cerr<<"NO such instruction.. exiting..";
                return ;
            }
            
        }
        n--;
    }
    
    cout<<endl;
    for(int i=0;i<label_index;i++){
        cout<<label[i].name<<" "<<label[i].address<<endl;
    }
}


void pass2(){
    
    int cptr=0;
    
    for(int k=0;k<input.size();k++){
        string s=input[k];
        size_t found = s.find("START");
        if(s[0]=='#'){
            continue;
        }
        else if (found != string::npos){
            int i=0;
            int ad=0;
            for(i=0;i<s.size();i++){
                if((s[i]>='0')&&(s[i]<='9')){
                    ad=ad*10 + (s[i]-'0');
                }
            }
            cptr=ad;
        }
        else if(s.find(":")!=string::npos){
            continue;
        }
        else{
            string instruction_name="";
            int curr=0;
            while(s[curr]!=' '){
                instruction_name+=s[curr];
                curr++;
            }
            for(int i=0;i<4;i++){
                if(instruction[i].name==instruction_name){
                    cptr+=instruction[i].size;
                    cout<<instruction[i].binary_code<<" ";
                    break;
                }
            }
            
            if(instruction_name=="ADD"){
                continue;
            }
            else if(instruction_name=="JUMP"){
                while(s[curr]==' ') curr++;
                string check_label="";
                while((s[curr]<='Z')&&(s[curr]>='A')){
                    check_label+=s[curr];
                    curr++;
                }
                for(int zz=0;zz<label_index;zz++){
                    if(label[zz].name==check_label){
                        cout<<label[zz].address;
                    }
                }
            }
            else if(instruction_name=="MVI"){
                int val=0;
                //        cout<<"yaha ";
                while(curr<s.size()){
                    //            cout<<"waha "<<curr<<" ";
                    if((s[curr]>='0')&&(s[curr]<='9')){
                        val=val*10 + (s[curr]-'0');
                    }
                    curr++;
                }
                cout<<val;
            }
            else if(instruction_name=="LDA"){
                int val=0;
                while(curr<s.size()){
                    if((s[curr]>='0')&&(s[curr]<='9')){
                        val=val*10 + (s[curr]-'0');
                    }
                    curr++;
                }
                cout<<val;
            }
            else{
                continue;
            }
            cout<<endl;
        }
    }
    
}

int main(){
    
    instruction[0]={"ADD",1,"A","87"};
    instruction[1]={"JUMP",3,"","C3"};
    instruction[2]={"MVI",2,"A","3E"};
    instruction[3]={"LDA",3,"","3A"};
    instruction[4]={"HLT",1,"","76"};
    cout<<"pass 1"<<endl;
    pass1();
    cout<<endl<<endl<<"pass 2"<<endl;
    pass2();
    
}