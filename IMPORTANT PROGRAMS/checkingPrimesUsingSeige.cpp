#include<iostream>
using namespace std;
typedef long long int ll;
void prime_sieve(int *p){
    for(ll i=3;i<=1000000;i+=2){
        p[i]=1;
    }
    for(ll i=3;i<=1000000;i+=2){
        if(p[i]==1){
            for(ll j=i*i;j<=1000000;j=j+i){
                p[j]=0;
            }
        }
    }
}
int main(){
    ll n;
    cin>>n;
    int p[1000005]={0};
    prime_sieve(p);
    for(ll i=0;i<=n;i++){
        if(p[i]==1){
            cout<<i<<" ";
        }
    }
}