#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;

int main(){
    ll n,k=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll c1=0,c2=0;
    for(ll i=0;i<n;i++){
        if(a[i]==5){
            c1++;
        }
        else if(a[i]==10){
            c2++;
            if(c1>0){
               c1--;
            }
            else{
                k=1;
                break;
            }
        }
        else if(a[i]==15){
            if(c2>0){
                c2--;
            }
            else if(c1>=1){
                c1-=2;
            }
            else{
                k=1;
                break;
            }
        }
    }
    if(k==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
