#include <bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int ll;
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
    ll n,count=0;
    cin>>n;
    vector<int> v;
    for(ll i=0;i<n;i++){
        ll m;
        cin>>m;
        v.push_back(m);
    }
    ll d=*min_element(v.begin(), v.end());
    for(ll i=0;i<n;i++){
        if(v[i]%d==0){
            count++;
        }
    }
    if(count==n){
        for(ll i=0;i<n;i++){
            cout<<v[i]/d<<" ";
        }
        cout<<endl;
    }
    else{
        for(ll i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
 }
}
