#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    if((a[0]+a[3])==(a[1]+a[2]) or (a[3]==(a[0]+a[1]+a[2])))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}