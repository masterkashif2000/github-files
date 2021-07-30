#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long int ll;

int main(){
    ll t,count=0;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        vector<ll> v;
        v.push_back(a[0]);
        for(ll i=1;i<n;i++){
            v.push_back(abs(a[i]-a[i+1]));
        }
        for(ll i=0;i<n;i++){
            if(b[i]<=v[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}

