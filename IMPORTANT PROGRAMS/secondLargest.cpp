#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll a[3];
    for(ll i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    cout<<a[1]<<endl;
    }
}

