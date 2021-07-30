#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;

while(t--){

    ll n;
    cin>>n;
    ll s=0,i=0;
    vector<int> v;
    v.push_back(2048);
    v.push_back(1024);
    v.push_back(512);
    v.push_back(256);
    v.push_back(128);
    v.push_back(64);
    v.push_back(32);
    v.push_back(16);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    while(n>0){
        s+=(n/v[i]);
        n=n%v[i];
        i++;
    }
    cout<<s<<endl;
}
}
