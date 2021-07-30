#include<iostream>
using namespace std;
typedef long long int ll;

int findFactorials(int n){
    ll p=5,ans=0;
    while((n/p)>0){
        ans+=n/p;
        p=p*5;
    }
    return ans;
}

int main(){
    ll n;
    cin>>n;
    ll d=findFactorials(n);
    cout<<"the number of trailing zeroes in the factorial of n is ->"<<d<<endl;
}