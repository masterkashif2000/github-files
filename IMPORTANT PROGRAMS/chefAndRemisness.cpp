#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {

      long long  int n,even=0,odd=0,m;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++){
        cin>>m;
        if(m%2==0){
            even++;
        }
        else{
            odd++;
        }
      }
      if(even>odd)
         cout<<"READY FOR BATTLE\n";
      else
         cout<<"NOT READY\n";
}
