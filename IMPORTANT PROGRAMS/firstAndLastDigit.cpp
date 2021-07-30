#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
char a[1000];
cin>>a;
ll t=strlen(a);
ll i=0;
for(;a[i]!='\0';i++){
    ll digit=a[i]-'0';
    a[i]=digit;
}
ll m=a[0];
ll n=a[t-1];
cout<<m+n<<endl;
}
}
