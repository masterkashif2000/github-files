#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
typedef long long int ll;

bool compare(pair<ll,ll> p1,pair<ll,ll> p2){
    ll d1=((p1.first*p1.first)+(p1.second*p1.second));
    ll d2=((p2.first*p2.first)+(p2.second*p2.second));

    if(d1==d2){
        return p1.first<p2.first;
    }
    return d1<d2;
}

int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll> > v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    for(int it=0;it<v.size();it++){
        cout<<v[it].first<<" "<<v[it].second<<endl;
    }
    sort(v.begin(),v.end(),compare);
     for(int it=0;it<v.size();it++){
        cout<<v[it].first<<" "<<v[it].second<<endl;
    }

}
