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
        ll a,b;
        cin>>a>>b;
        ll c=a*b;
        ll sum2=(c*(c+1))/2;
        cout<<sum2<<endl;
    }
}
