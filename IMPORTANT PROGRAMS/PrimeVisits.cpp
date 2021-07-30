#include<iostream>
using namespace std;
typedef long long int ll;
void prime_sieve(int p[]){
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
    p[2]=1;
    p[1]=p[0]=0;
}
int main(){
    ll n;
    cin>>n;
    ll p[1000005]={0};
    prime_sieve(p);
    ll cSum[1000005]={0};
    for(ll i=1;i<=1000000;i++){
       cSum[i]=cSum[i-1]+p[i];
    }
    ll q;
    cin>>q;
    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<cSum[b]-cSum[a-1]<<endl;
    }
    }