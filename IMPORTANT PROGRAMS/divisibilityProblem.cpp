#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else if(a>b){
            int d=a%b;
            cout<<b-d<<endl;
        }
        else if(b>a){
            cout<<b-a<<endl;
        }
    }
}