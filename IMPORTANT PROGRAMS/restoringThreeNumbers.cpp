#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m,a,x,y;
    cin>>n>>m>>a;
    int r1=(n%a)==0?n/a:(n/a)+1;
    int r2=(m%a)==0?m/a:(m/a)+1;
    cout<<r1*r2;
}
