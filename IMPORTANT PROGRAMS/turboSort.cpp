#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
vector<int> v;
ll t;
cin>>t;
ll a[t];
for(ll i=0;i<t;i++){
    cin>>a[i];
}
sort(a,a+t);
for(ll i=0;i<t;i++){
    cout<<a[i]<<endl;
}
}
