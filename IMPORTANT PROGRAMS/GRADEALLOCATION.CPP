#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
            ll n,m,s=0;
            cin>>n>>m;
            ll a[n];
            for(ll i=0;i<n;i++){
                cin>>a[i];
                s+=a[i];
            }
            cout<<min(s,m)<<endl;

    }
}
