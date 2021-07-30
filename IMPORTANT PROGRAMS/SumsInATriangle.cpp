#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,t=0;
    cin>>n;
    ll a[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(ll i=1;i<n;i++){
        for(ll j=0;j<=i;j++){
             t=max(a[i][j],a[i][j+1]);
        }
    }
    cout<<t<<endl;
}
}
