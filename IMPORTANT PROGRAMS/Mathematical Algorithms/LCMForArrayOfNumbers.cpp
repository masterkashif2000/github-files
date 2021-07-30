#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;


    ll gcd(ll n,ll m){
        if(n==0)
            return 0;
        return gcd(m%n,n);
    }
    //function to return LCM of two Numbers

    ll lcm(ll n,ll m){
        return (n*m)/gcd(n,m);
    }


int main(){
    ///LCM=a*b/GCD(a,b)
    ll arr[]={2,7,3,9,4};
    ll n=sizeof(arr)/sizeof(arr[0]);
    cout<<"LCM of "<<a<<"and "<<b<<"is"<<lcm(a,b);
    return 0;
}


