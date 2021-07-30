#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,d,c=0,m;
    cin>>n>>d;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n-1;i=i+m)
    {   ll t=(a[i+1]-a[i]);
        //cout<<"i="<<i<<" "<<i+1<<t<<endl;
        if(t<=d){
            c++;
            m=2;}
            else
            m=1;
    }
    cout<<c<<endl;
}
