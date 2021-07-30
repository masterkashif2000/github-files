#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
ll k,n,w,sum=0;
cin>>k>>n>>w;
vector<int> v;
for(ll i=1;i<=w;i++){
    v.push_back(k*i);
}
for(ll i=0;i<w;i++){
    sum+=v[i];
}
if(sum>n){
cout<<sum-n<<endl;
}
else{
    cout<<"0"<<endl;
}
}
