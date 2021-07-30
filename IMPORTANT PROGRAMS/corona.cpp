#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
  ll x,y,a,b,c;
  cin>>x>>y>>a>>b>>c;
  vector<int> p;
  vector<int> q;
  vector<int> r;
  for(int i=0;i<a;i++){
    int red;
    cin>>red;
    p.push_back(red);
  }
  for(int i=0;i<b;i++){
    int green;
    cin>>green;
    q.push_back(green);
  }
  for(int i=0;i<c;i++){
    int colourless;
    cin>>colourless;
    r.push_back(colourless);
  }
  sort(p.begin(),p.end());
  sort(q.begin(),q.end());
  sort(r.begin(),r.end());

  vector<int> v(x+y+c);
  for(ll i=0;i<x;i++){
    v[i]=p[a-x+i];
  }
  for(ll i=x;i<x+y;i++){
    v[i]=q[b-x-y+i];
  }
  for(ll i=x+y;i<(x+y+c);i++){
    v[i]=r[i-x-y];
  }
  sort(v.begin(),v.end());
  ll sum=0;
  for(ll i=c;i<(x+y+c);i++){
    sum+=v[i];
  }
  cout<<sum<<endl;
}
