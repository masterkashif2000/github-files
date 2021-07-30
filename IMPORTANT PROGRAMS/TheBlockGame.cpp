#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;

while(t--){
  char s[20];
  cin>>s;
  ll a=0;
  ll b=sizeof(s)/sizeof(s[0])-1;
  while(a<b){
    if(s[a++]!=s[b--]){
        cout<<"looses"<<endl;
        break;
    }
  }
  cout<<"win"<<endl;
}
}
