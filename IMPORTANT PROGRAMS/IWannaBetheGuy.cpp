#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
   ll n,m;
   cin>>n>>m;
   ll a[n];
   for(ll i=0;i<n;i++){
     cin>>a[i];
   }
   ll b[n]={1};
   for(ll j=0;j<n;j++){
     for(ll i=j+1;i<n;i++){
        if(a[j]<a[i]){
            b[i]=max(b[i],b[j]+1);
        }
     }
   }
   for(ll i=0;i<n;i++){
    cout<<b[i]<<" ";
   }
}
