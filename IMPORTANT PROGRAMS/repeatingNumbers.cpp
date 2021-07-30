#include<iostream>
#include<string>
using namespace std;
int main(){
string s,result="";
cout<<"enter the string";
getline(cin,s);
int len=sizeof(s)/sizeof(s[0]);
int hash[100]={0};
for(int i=0;i<len;i++){
    if(hash[s[i]]==0){
        hash[s[i]]=1;
        result+=s[i];
    }
}
cout<<result<<endl;
}
