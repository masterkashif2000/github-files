#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    //first part
    cout<<"*";
    for(ll i=1;i<=(n-3)/2;i++){
        cout<<" ";
    }
    for(ll i=1;i<=(n+1)/2;i++){
        cout<<"*";
    }
    cout<<endl;
    //second part
    for(ll i=1;i<=(n-3)/2;i++){
        cout<<"*";
        for(ll i=1;i<=(n-3)/2;i++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //third part
    for(ll i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    //fourth part
    for(ll i=1;i<=(n-3)/2;i++){
        for(ll i=1;i<=(n-3)/2+1;i++){
            cout<<" ";
        }
        cout<<"*";
        for(ll i=1;i<=(n-3)/2;i++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //fifth part
    for(ll i=1;i<=(n+1)/2;i++){
        cout<<"*";
    }
    for(ll i=1;i<=(n-3)/2;i++){
        cout<<" ";
    }
    cout<<"*";
    cout<<endl;
}