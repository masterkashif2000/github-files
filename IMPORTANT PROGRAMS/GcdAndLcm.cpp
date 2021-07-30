#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll t=__gcd(a,b);
        ll lcm=a*b/t;
        cout<<t<<" "<<lcm<<endl;
    }
}
