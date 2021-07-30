#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
typedef long long int ll ;

bool compare(ll a,ll b){
    return a>b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    vector<ll> v;
    while(t--){
    ll a,b;
    cin>>a>>b;
    ll d=1;
    for(ll i=1;i<=a;i++){
        d=i^d;
        v.push_back(d);
    }
    cout<<v[b-1]<<endl;
    }
}