#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
int n;
cin>>n;
vector<int> v;
for(ll i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
for(ll i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v.rbegin(),v.rend());
for(ll i=0;i<n;i++){
    cout<<v[i]<<" ";
}
vector<int> t;
for(ll i=0;i<n;i++){
    int x;
    cin>>x;
    t.push_back(x);
}
int i;
for(auto i=t.begin();i!=t.end();++i){
    cout<<*i<<endl;
}
}
