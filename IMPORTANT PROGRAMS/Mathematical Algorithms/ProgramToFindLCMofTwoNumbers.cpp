#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class gfg
{
    public:ll gcd(ll a,ll b){
        if(a==0)
            return 0;
        return gcd(b%a,a);
    }
    //function to return LCM of two Numbers

    ll lcm(ll a,ll b){
        return (a*b)/gcd(a,b);
    }
};

int main(){
    ///LCM=a*b/GCD(a,b)
    gfg g;
    ll a,b;
    cin>>a>>b;
    cout<<"LCM of "<<a<<"and "<<b<<"is"<<g.lcm(a,b);
    return 0;
}
